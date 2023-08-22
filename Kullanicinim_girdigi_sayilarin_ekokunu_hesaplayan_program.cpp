#include <stdio.h>
#include<stdlib.h>

void main()
{
	int sayi1, sayi2, ekok;
	printf("1.Sayiyi giriniz: ");
	scanf_s("%d", &sayi1);
	printf("2.Sayiyi giriniz: ");
	scanf_s("%d", &sayi2);

	for (int i = 1; i < (sayi1 * sayi2); i++)
	{
		if (i % sayi1 == 0 && i % sayi2 == 0) {
			ekok = i;
			break;
		}
	}
	printf("\nEKOK = %d\n", ekok);
	system("pause");
}
