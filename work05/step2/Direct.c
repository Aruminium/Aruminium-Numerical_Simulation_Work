#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//閉区間[a,b]
const double a = 1.15;
const double b = 1.20;

typedef struct data{
	int n; //実行回数
	int x; //初期値
	double ans; //推定値
	data* next;
}data;

double f(double);
void sort(data,data);


int main(void){
	int n = 0;
	double x = 1.20,xk;
	double err = 1;
	while (err > 0.000001){
		xk = f(x);
		err = fabs(x-xk);
		x = xk;
		n++;
		printf("err = %f\n", err);
	}
	printf("%f\n%d", x,n);
	return 0;
}

double f(double x){
	return atan(2 * x);
}
