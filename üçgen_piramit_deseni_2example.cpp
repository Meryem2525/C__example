#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, j, row;
	printf("Enter a row: ");
	scanf_s("%d", &row);

	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row * 2 - i; j++) {
			printf(" ");
	 }
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}