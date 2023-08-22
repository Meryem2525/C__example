#include <stdio.h>
#include<stdlib.h>
#define BOYUT 8
void main()
{
	int data[BOYUT] = { 25,57,48,37,12,92,86,33 };

	int gecici, enKucuk;

	printf("Veriler orjinal sirasinda: ");

	for (int i = 0; i < BOYUT; i++)
		printf("%4d", data[i]);

	for (int adim = 0; adim < BOYUT; ++adim)
	{
		enKucuk = adim;
		for (int j = adim + 1; j < BOYUT; j++)
		{
			if (data[j] < data[enKucuk])
				enKucuk = j;
		}

		gecici = data[adim];
		data[adim] = data[enKucuk];
		data[enKucuk] = gecici;
	}

	printf("\nSiralanmis data: ");
	for (int i = 0; i < BOYUT; ++i)

		printf("%d ", data[i]);
	printf("\n"); system("pause");
}
