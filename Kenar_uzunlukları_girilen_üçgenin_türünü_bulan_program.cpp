#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int a, b, c;
	char longestSide;
	printf("Enter the side lenghts of the triangle: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c) {
		longestSide = 'a';
	}
	else if (b > a && b > c) {
		longestSide = 'b';
	}
	else {
		longestSide = 'c';
	}
	//------------------------------------------------
	if (longestSide == 'a') {
		if (a * a == b * b + c * c) {
			printf("Dik bir ucgendir...");
		}
		else if (a * a < b * b + c * c) {
			printf("Dar acili bir ucgendir...");
		}
		else if(a * a > b * b + c * c) {
			printf("Genis acili bir ucgendir...");
		}
		else {
			printf("Girilen kenarlar bir ucgen olusturmaz\n");
		}
	}else if (longestSide == 'b') {
		if (b * b == a *a + c * c) {
			printf("Dik bir ucgendir...");
		}
		else if (b * b < a * a + c * c) {
			printf("Dar acili bir ucgendir...");
		}
		else if (b * b > a * a + c * c) {
			printf("Genis acili bir ucgendir...");
		}
		else {
			printf("Girilen kenarlar bir ucgen olusturmaz\n");
		}
	}

	if (longestSide == 'c') {
		if (c*c == b * b + a*a) {
			printf("Dik bir ucgendir...");
		}
		else if (c*c < b * b + a*a) {
			printf("Dar acili bir ucgendir...");
		}
		else if (c*c > b * b + a*a) {
			printf("Geniş acili bir ucgendir...");
		}
		else {
			printf("Girilen kenarlar bir ucgen olusturmaz\n");
		}
	}


	return 0;
}
