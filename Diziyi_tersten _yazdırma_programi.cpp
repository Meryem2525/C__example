#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, numbers[7];

	printf("Enter array numbers:\n  ");
	for ( i = 0; i < 7; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	printf("\nOrginal order: ");
	for (i = 0; i < 7; i++)
	
	{
		printf("%d ", numbers[i]);
	}
	printf("\nReverse order: ");
	for (i = 6; i >=0; i--)
	{
		printf("%d ", numbers[i]);
	}
	return 0;
}