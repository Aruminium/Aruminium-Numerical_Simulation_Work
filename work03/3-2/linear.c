#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#define N 4

const double x = M_PI/4;
const double X[N] = {0, M_PI/6, M_PI/3, M_PI/2};
double Y[N];

int main(void){
	for(int i= 0;i < N;i++)Y[i] = sin(X[i]);
	double y = Y[1] + (Y[2]-Y[1])*(x - X[1]) / (X[2]-X[1]);
	printf("%f\n", y);
	return 0;
}