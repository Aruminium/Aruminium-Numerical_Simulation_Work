#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//閉区間[a,b]
const double a = 1.15;
const double b = 1.20;
const double step = 0.001;

typedef struct data {
	int n; //実行回数
	double x; //初期値
	double ans; //推定値
	struct data* next;
}data;

data* head;

double f(double);
void sort();
void insert(data);;
data* newData(data);
void deleteAll();
void deleteHead();
void view();


int main(void){
	int n;
	double xk, err, ans;
	data tmp;
	printf("#x n\n");
	for(double x=a; x<=b; x+=step){
		ans = x;
		n = 0;
		err = 1;
		while (err > 0.000001){
			xk = f(ans);
			err = fabs(ans-xk);
			ans = xk;
			n++;
		}
		tmp.n = n;
		tmp.x = x;
		tmp.ans = ans;
		tmp.next = NULL;
		insert(tmp);
	}
	view();
	deleteAll();
	return 0;
}

double f(double x){
	return atan(2 * x);
}

void insert(data insertData)
{
	data* itr = head;
	data* ndata = newData(insertData);
	//空の状態
	if(head == NULL){
		head = ndata;
		return;
	}
	while(1){
		//末尾に入れる場合
		if(itr->next == NULL){
			itr->next = ndata;
			return;
		}
		itr = itr->next;
	}
	return;
}

data* newData(data newData){
	data *ndata = (data*)malloc(sizeof(data));
	ndata->n = newData.n;
	ndata->x = newData.x;
	ndata->ans = newData.ans;
	ndata->next = NULL;
	return ndata;
}

void deleteHead(){
	data* next;
	if(head != NULL){
		next = head->next;
		free(head);
		head = next;
	}
}

void deleteAll(){
	while(head != NULL){
		deleteHead();
	}
}

void view(){
	data* itr = head;

	while(itr != NULL){
		printf("%f %d\n", itr->x, itr->n);
		printf("#%f\n\n", itr->ans);
		itr = itr->next;
	}
}