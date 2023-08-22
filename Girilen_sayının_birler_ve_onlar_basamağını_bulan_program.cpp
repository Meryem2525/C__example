#include <stdio.h>
#include <stdlib.h>

int main() {
	int myNumber,first,second;
	printf("Pozitif bir sayi giriniz: ");
	scanf_s("%d", &myNumber);

	first = myNumber % 10;
	second = (myNumber % 100) / 10;

	printf("Girilen bir sayının birler basamağı:%d\n",first);
	printf("Girilen bir sayının onlar basamağı:%d\n", second);

	return 0;
}
