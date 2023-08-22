#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int number, squareRoot;

	printf("Enter a positive number:  ");
	scanf_s("%d", &number);
	if (number < 0) {
		printf("Please do not do this\n");
	}
	else {
		squareRoot = sqrt(number);
		if (squareRoot * squareRoot == number) {
			printf("square root of %d is an integer\n");
		}
		else {
			printf("No it is not\n");
		}
	}
	return 0;
}