#include <stdio.h>
#include <stdlib.h>

int main() {
	int myNumber, bolum, kalan, sum;
	sum = 0;
	printf("4 basamakli bir sayi giriniz: ");
	scanf_s("%d", &myNumber);
		
	bolum = myNumber / 1000;
	sum += bolum;
	kalan = kalan % 1000;

	bolum = kalan/ 100;
	sum += bolum;
	kalan = kalan % 100;

	bolum = kalan / 10;
	sum += bolum;
	kalan = kalan % 10;

	sum += kalan;

	printf("Girdiğiniz sayinin rakamlari toplami: %d", sum);

	return 0;
}
