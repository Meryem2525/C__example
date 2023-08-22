#include <stdlib.h>
#include <stdio.h>

// sum of the numbers

int main() {

	int number, section, remainder, sum = 0;
	printf("enter three digit number: ");
	scanf_s("%d", &number);

    section = number / 100;
	sum = sum + section;
	remainder = number % 100;

	section = remainder / 10;
	sum = sum + section;
	remainder = number % 10;

	sum = sum + remainder;

	printf(" sum of digit values=%d\n", sum);



	return 0;
}