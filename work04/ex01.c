//練習問題
#include <stdio.h>
#include <math.h>

int main(void) {
	double a = 1, b = -2000, c = 1;
	printf("x1 = %f\n", (-b + sqrtf(pow(b, 2) - 4 * a * c)) / 2 * a);
	printf("x2 = %f\n", (-b - sqrtf(pow(b, 2) - 4 * a * c)) / 2 * a);
	return 0;
}