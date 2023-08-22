// yıldız şekli.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
	int sayi = 0;
	printf("3 basmakli sayi giriniz: ");
	scanf_s("%d", &sayi);

	if ((sayi % 10) % 2 == 0)
	{
		if (((sayi / 10) % 10) % 2 == 0)
		{
			if ((sayi / 10) % 2 == 0)
			{
				printf("tüm sayilar ciftir");
			}
		}
	}
	else {
		if (((sayi / 10) % 10) % 2 == 1)
		{
			if ((sayi / 10) % 2 == 1)
			{
				printf("tüm sayilar ciftir");

			}
		}
		

	}

	return 0;

	int s1, s2, b;
	printf("iki sayi giriniz: ");
	scanf("%d%d", &s1 & s2);
	
	if (s1 >= s2) {
		b = s1;
	}
	else
		b = s2;

	for (int k = 2; k>=1 ; k--)
	{
		if (s1 % k == 0 && s2 % k == 0) {
			printf("eb0ob: %d\n", k);
				break;
		}
	}



















}


