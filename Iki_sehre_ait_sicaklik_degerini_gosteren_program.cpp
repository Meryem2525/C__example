#include <stdio.h>
#include<stdlib.h>

const int SEHİR = 2;
const int HAFTA = 7;

int main()
{
	int dizi[SEHİR][HAFTA];
	for (int i = 0; i < SEHİR; ++i) {
		for (int j = 0; j < HAFTA; ++j) {
			printf("Sehir %d, Gun %d: ", i + 1, j + 1);
			scanf_s("%d", &dizi[i][j]);
		}
	}

	printf("\nGösterilen Deger : \n\n");
	for (int i = 0; i < SEHİR; ++i) {
		printf("Sehir %d: ", i + 1);
		for (int j = 0; j < HAFTA; ++j)
		{
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
