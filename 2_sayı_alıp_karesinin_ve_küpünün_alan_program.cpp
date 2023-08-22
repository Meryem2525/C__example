#include <stdio.h>
#include <stdlib.h>


int main() {
	float myNumber1, myNumber2,myNumber3;
	myNumber1 = 0.0;
	myNumber2 = 0.0;
	myNumber3 = 0.0;

	printf("Enter three numbers: ");
	scanf_s("%f %f %f", &myNumber1, &myNumber2,&myNumber3);

	printf("The number\t\t");
	printf("Square of number\t\t");
	printf("Cube of number\t\t\n");

	printf("------------\t\t");
	printf("------------\t\t\t");
	printf("------------\t\n");

	printf("%f\t\t", myNumber1);
	printf("%f\t\t\t", myNumber1*myNumber1);
	printf("%f\t\t\n", myNumber1*myNumber1*myNumber1);

	printf("%f\t\t", myNumber2);
	printf("%f\t\t\t", myNumber2 * myNumber2);
	printf("%f\t\t\n", myNumber2 * myNumber2 * myNumber2);

	printf("%f\t\t", myNumber3);
	printf("%f\t\t\t", myNumber3* myNumber3);
	printf("%f\t\t\t", myNumber3* myNumber3* myNumber3);
	printf("\n\n");


	return 0;
}