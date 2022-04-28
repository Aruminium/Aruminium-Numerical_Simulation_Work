#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#define N 4

int main(void){
	double x = M_PI/4;
	double X[N] = {0, M_PI/6, M_PI/3, M_PI/2};
	double Y[N] = {sin(0), sin(M_PI/6), sin(M_PI/3), sin(M_PI/2)};
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