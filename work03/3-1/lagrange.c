#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#define N 3

int main(void){
	double x = 1.16;
	double X[N] = {1.1, 1.2, 1.3};
	double Y[N] = {0.89121, 0.93204, 0.96356};
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