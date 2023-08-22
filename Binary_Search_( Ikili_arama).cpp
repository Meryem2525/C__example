 #include <stdio.h>
#include<stdlib.h>
#define BOYUT 10
int main()
{
	int c, ilk, son, orta, n = BOYUT, arama,
		dizi[BOYUT];
	printf("%d sayi girin\n", n);
	for (c = 0; c < n; c++)
		scanf_s("%d", &dizi[c]);
	printf("aranacak sayiyi girin\n");
	scanf_s("%d", &arama);
	ilk = 0;
	son = n - 1;
	orta = (ilk + son) / 2;	while (ilk <= son) {
		if (dizi[orta] < arama)
			ilk = orta + 1;
		else if (dizi[orta] == arama) {
			printf("%d sayisi dizinin %d. elemanidir.\n", arama, orta + 1);
				break;
		}
		else
				son = orta - 1;
		orta = (ilk + son) / 2;
	}
	if (ilk > son)
		printf("%d bulunamadı\n", arama);
	system("pause");}