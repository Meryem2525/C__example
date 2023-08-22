#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, row,a=0;
	char letter;

	printf("Eneter a letter: ");
	scanf_s("%c", &letter);

	printf("Please enter the number of the row (odd  number): ");
	scanf_s("%d", &row);
	
	for ( i = 0; i < row; i++)
	{
		if (i <= row / 2)
			a++;
		else
			a--;
		for (j = 0; j < a; j++)
		{
			printf(" ");
		}
		printf("%c\n",letter);
	}
	

	return 0;
}
