//グローバル変数では関数は使えない
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4

const double x = M_PI/4;
const double X[N] = {0, M_PI/6, M_PI/3, M_PI/2};
double Y[N];

double f1(int);
double f2(int, int);
double f3(int, int, int);
double f4(int, int, int, int);

int main(void){
	for(int i= 0;i < N;i++)Y[i] = sin(X[i]);
	double memo[N];
	double fn;
	printf("#x y");
	for(float n = X[1];n <= X[2];n += 0.01){
		memo[0] = 1;
		for(int i = 1;i < N-1;i++) memo[i] = memo[i-1]*(n-X[i-1]);

		fn = memo[0]*f1(0) + memo[1]*f2(0,1) + memo[2]*f3(0,1,2) + memo[3]*f4(0,1,2,3);
		printf("%f %f\n", n, fn);
	}

	memo[0] = 1;
	for(int i = 1;i < N-1;i++) memo[i] = memo[i-1]*(x-X[i-1]);

	fn = memo[0]*f1(0) + memo[1]*f2(0,1) + memo[2]*f3(0,1,2) + memo[3]*f4(0,1,2,3);
	printf("\n#%f %f\n", x, fn);
	return 0;
}

double f1(int a){
	return Y[a];
}

double f2(int a, int b){
	return (f1(b)-f1(a)) / (X[b]-X[a]);
}

double f3(int a, int b, int c){
	return (f2(b, c)-f2(a, b)) / (X[c]-X[a]);
}

double f4(int a, int b, int c, int d){
	return (f3(b, c, d)-f3(a, b, c)) / (X[d] - X[a]);
}