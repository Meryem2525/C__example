#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x = 7;
	int* ptr = &x;


	printf(" x: %d\n", x); // x değerini gösterir
	printf(" x variable address :%x\n", &x);   // x adresini gösterir (& işareti öne geldiği zaman adres gösterir)
	printf(" x variable address :%x\n", ptr);  // x adresini ptr ye aktarır
	printf(" x variable address :%x\n", &ptr); // x adresini ptr ye aktarır
	printf(" x variable :%d\n", *ptr);  // *ptr ise x ilk değerini gösterir

	printf("\n\n\t example2\n");


	char c = 'm';
	char* pointer = &c;

	printf("c:%c\n", c);
	printf("c variable address :%x\n", &c);
	printf("c variable address :%x\n", pointer);
	printf("c variable adsress :%x\n", &pointer);
	printf("c variable:%c\n", *pointer);

	return 0;
}
  