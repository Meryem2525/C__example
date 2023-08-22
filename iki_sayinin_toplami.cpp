#include <stdlib.h>
#include <stdio.h>

// sum of the numbers

int main() {

	int number1, number2, sum = 0;
	printf("enter number1: ");
	scanf_s("%d", &number1);

	printf("enter number2: ");
	scanf_s("%d", &number2);

	sum = number1 + number2;

	printf("sum is %d", sum);


	return 0;
}