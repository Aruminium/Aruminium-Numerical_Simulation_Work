#include <stdio.h>
#include "a.h"

double f(double);

int main(void){
	printf("#x y\n");
	for(double i=-N; i<=N+d; i+=d){
		printf("%f %f\n", i, f(i));
	}
	return 0;
}

double f(double x){
	return 2 * x;
}