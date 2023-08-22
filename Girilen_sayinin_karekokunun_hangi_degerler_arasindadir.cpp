#include <stdio.h>
#include<stdlib.h>

void main()
{
	int sayi = 0, s1 = 0, s2 = 0;

	printf("sayi giriniz: ");
	scanf_s("%d", &sayi);

	for (int i = 0; i < sayi; i++)
	{
		if (i * i <= sayi && (i + 1) * (i + 1) > sayi)
		{
			s1 = i;
			s2 = i + 1;
			break;
		}

	}
	printf("%d - %d\n", s1, s2);
	system("pause");
}
