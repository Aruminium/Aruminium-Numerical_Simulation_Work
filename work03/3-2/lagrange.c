#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#define N 4

const double x = M_PI/4;
const double X[N] = {0, M_PI/6, M_PI/3, M_PI/2};
double Y[N];

int main(void){
	for(int i= 0;i < N;i++)Y[i] = sin(X[i]);
	double Nk;
	printf("#x y\n");
	for(float n = X[1];n <= X[2];n += 0.01){
		double pn = 0;
		for(int i = 0;i < N;i++){
			Nk = Y[i];
			for(int j = 0;j < N;j++){
				if(i == j)continue;
				Nk *= (n - X[j]);
				Nk /= (X[i] - X[j]);
			}
			pn += Nk;
		}
		printf("%f %f\n", n, pn);

	}
	double pn = 0;
	for(int i = 0;i < N;i++){
		Nk = Y[i];
		for(int j = 0;j < N;j++){
			if(i == j)continue;
			Nk *= (x - X[j]);
			Nk /= (X[i] - X[j]);
		}
		pn += Nk;
	}
	printf("\n#%f %f\n", x, pn);
	return 0;
}