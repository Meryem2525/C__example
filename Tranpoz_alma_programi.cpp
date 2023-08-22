#include <stdio.h>
#include <stdlib.h>

#define SIZE 2

void main() {
	int a[SIZE][SIZE], transpose[SIZE][SIZE], i, j;
	printf("\nmatris elemanlarini giriniz:\n");
	for (i = 0; i < SIZE; ++i)
		for (j = 0; j < SIZE; ++j) {
			printf("eleman giriniz a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &a[i][j]);
		}
	printf("\ngirilen matris: \n");
	for (i = 0; i < SIZE; ++i)
		for (j = 0; j < SIZE; ++j) {
			printf("%d ", a[i][j]);
			if (j == SIZE - 1)
				printf("\n");
		}
	for (i = 0; i < SIZE; ++i)
		for (j = 0; j < SIZE; ++j) {
			transpose[j][i] = a[i][j];
		}	system("pause");}