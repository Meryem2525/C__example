#include <stdlib.h>
#include <stdio.h>



int main() {

// temporary = geçici 

	double first_number, second_number, temporary_number;
	printf("Enter first number: ");
	scanf_s("%f", &first_number);

	printf("Enter second number: ");
	scanf_s("%f", &second_number);

	temporary_number = first_number;
	
	first_number = second_number;

	second_number = temporary_number;

	printf("\n first number after change=%f\n", first_number);
	printf(" second number after change=%f\n", second_number);


	return 0;
}