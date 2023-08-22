#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	char myLetters[7] = { 'a','b','c','d','e','f','x' };


	printf("Ilk elamanin adresi:%x\n", &myLetters[0]);
	printf("Ilk elamanin adresi:%x\n", myLetters);
	
	printf("Ikinci elamanin adresi:%x\n", &myLetters[1]);
	printf("Ikinci elamanin adresi:%x\n", myLetters + 1);

	printf("Ucuncu  elamanin adresi:%x\n", &myLetters[2]);
	printf("Ucuncu elamanin adresi:%x\n", myLetters + 2);

	printf("Ilk elamanin degeri:%c\n", myLetters[0]);
	printf("Ilk elamanin degeri:%c\n", *(myLetters));

	printf("Ikinci elamanin degeri:%c\n", myLetters[1]);
	printf("Ikinci elamanin degeri:%c\n", *(myLetters + 1));

	printf("Ucuncu  elamanin degeri:%c\n", myLetters[2]);
	printf("Ucuncu elamanin degeri:%c\n", *(myLetters + 2));

	return 0;

}