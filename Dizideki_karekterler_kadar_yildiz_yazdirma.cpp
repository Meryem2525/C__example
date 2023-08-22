#include <stdio.h>
#include <stdlib.h>

#define UZUNLUK 10

void main()
{
	int dizi[UZUNLUK], tek = 0, cift = 0;

	printf("diziye 10 tane tamsayi giriniz:\n");
	for (int k = 0; k < UZUNLUK; k++)
		scanf_s("%d", &dizi[k]);

	printf("dizinin elemanlari kadar yildiz:\n");
	for (int k = 0; k < UZUNLUK; k++)
	{
		for (int i = 0; i < dizi[k]; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}

