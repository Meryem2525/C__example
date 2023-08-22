#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
{
	int i, j, N;
	int count;
	do {

		printf("N sayisini girniz: ");
		scanf_s("%d", &N);

	} while (N % 2 == 0);
	count = N;

	for (i = 1; i <= count; i++)
	{
		for (j = 1; j <= count; j++)
		{
			if (j == i || (j == count - i + 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
}
