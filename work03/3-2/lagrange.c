#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#define N 4

const double x = M_PI/4;
const double X[N] = {0, M_PI/6, M_PI/3, M_PI/2};
double Y[N];

int main(void){
	for(int i= 0;i < N;i++)Y[i] = sin(X[i]);
	double pn = 0;
	double Nk;
	for(int i = 0;i < N;i++){
		Nk = Y[i];
		for(int j = 0;j < N;j++){
			if(i == j)continue;
			Nk *= (x - X[j]);
			Nk /= (X[i] - X[j]);
		}
		pn += Nk;
	}
	printf("%f",pn);
}