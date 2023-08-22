#include <stdio.h>
#include <stdlib.h>


void main()
{
	int sayi1, top = 0, check = 0, sonuc = 0;

	printf("10 tabaninda sayi gir: ");
	scanf_s("%d", &sayi1);

	while (check < sayi1)
	{
		int temp = 2, sayac = 1, sayion = 10;

		while ((sayi1 - check) - temp >= temp)
		{
			temp = temp * 2;
			sayac = sayac + 1;
		}

		check = check + temp;

		for (int k = 1; k < sayac; k++)
			sayion = sayion * 10;

		if ((sayi1 - check) >= 0)
			sonuc = sonuc + sayion;

		else
			sonuc = sonuc + 1;
	}
	printf("%d\n", sonuc);

	system("pause");
}