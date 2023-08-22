#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, boyut;
	int numbers[100];

	printf("Enter positive number: ");
	scanf_s("%d", &boyut);

	printf("Enter array numbers: ");
	for ( i = 0; i < boyut; i++)
	{
		scanf_s("%d", &numbers[i]);
	}

	printf("Odd numbers:  "); //tek sayilar
	for ( i = 0; i < boyut; i++)
	{
		if (numbers[i] % 2 == 1)
		{
			printf("%d ", numbers[i]);
		}
	}

	printf("Even numbers:  ");   // cift sayilar
	for ( i = 0; i < boyut; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			printf("%d ", numbers[i]);
		}
	}
	printf("\n");
	return 0;
}