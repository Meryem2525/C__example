#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double x = 3.1415;
	double* y = &x;
	double* z = &x;
	printf("x:%f\n\n", x);
	printf("x:%x\n\n", &y);
	printf("x:%x\n\n", y);
	printf("x:%f\n\n", *y);


	*y = 21.18;
	printf("x:%f\n\n", x);
	printf("x:%x\n\n", *y);
	printf("x:%x\n\n", &x);
	
	return 0;
}
