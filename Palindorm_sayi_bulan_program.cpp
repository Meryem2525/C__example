#include <stdio.h>
#include <stdlib.h>


void main()
{
	int sayi1;

	scanf_s("%d", &sayi1);

	if (sayi1 / 10000 == sayi1 % 10 && (sayi1 % 10000) / 1000 == (sayi1 % 100) / 10)

		printf("sayi palindrome dur\n");
	else

		printf("sayi palindrome degildir\n");

	system("pause");
}