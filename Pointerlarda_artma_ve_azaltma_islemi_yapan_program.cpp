#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	char name = 'm';
	double y = 3.1415;
	int x = 7;

	char* nameptr = &name;
	double* yptr = &y;
	int* xptr = &x;


	printf("First addresses:\n\n");

	printf("name's first address:%x\t value:%c\n", nameptr, *nameptr);
	printf("y first address:%x\t value:%f\n", yptr, *yptr);
	printf(" x first address:%x\t value:%d\n", xptr, *xptr);

	nameptr++;
	yptr++;
	xptr++;

	printf("\n\nnext addresses:\n\n");
	 
	printf("name's next address:%x\t value:%c\n", nameptr, *nameptr);
	printf("y next address:%x\t value:%f\n", yptr, *yptr);
	printf("nx next address:%x\t value:%d\n", xptr, *xptr);

	return 0;
}
