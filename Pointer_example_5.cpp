#include<stdio.h>
#include<stdlib.h>
#define size 10
int main() {
	int* array1[size];
	int* temp;
	int array2[10] = { 3,1,6,4,5,10,9,8,7,2 };
	for
		(int i = 0; i < size; i++) {
		array1[
			i] = &array2[
				i];
	}
	for
		(int i = 1; i < size; i++) {
		for
			(int j = 0; j < size
				-
				i; j++) {
			if (*array1[j] > *array1[j + 1]) {
				temp = array1[j];
				array1[j] = array1[j + 1];
				array1[j + 1] = temp;
			}
		}
	}
	printf("array2 : \n");
		for
			(int i = 0; i < size; i++) {
			printf("adres : %p --------", &array2[i]);
			printf("deger : %d \n", array2[
				i]);
		}
	printf("\n");
		printf("\npointer degiskeni ile siralanmis hali	\n");
		printf
		("array1 : \n");
			for
				(int i = 0; i < size; i++) {
				printf("adres : %p --------", array1[i]);
				printf("deger : %d \n", *array1[i]);
			}
	system("pause");
	return 0;
}
