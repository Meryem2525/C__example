#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void myArray(int* , int);

int main() {
	int numbers[] = { 1,7,5,8,9,16 };
	int i, size;
	size = sizeof(numbers) / sizeof(numbers[0]);  // very information

	printf("\n\tPrevious state:\n");
	printf("-----------------------------------------\n");
	for (i = 0; i < size; i++) {
		printf("numbers[%d]:%d\n", i, numbers[i]);
	}

	myArray(numbers, size);
	printf("\n\tNext status:\n");
	printf("-----------------------------------------\n");
	for ( i = 0; i < size; i++)
	{
		printf("numbers[%d]:%d\n", i, numbers[i]);
	}
	
	return 0;
}

void myArray(int* numbers, int size) {
	int j = 0;
	for ( j = 0; j < size; j++)
	{
		*(numbers + j) *= 3;
	}
}