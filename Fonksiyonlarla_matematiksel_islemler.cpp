#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void menu();
int min(int, int);
int max(int, int);
int square(int);
int absolute(int);
int cube(int);


int main(){
	int choose = 0, x, y;
	menu();
	printf("\nChoose a number (1-5): ");
	scanf_s("%d", &choose);
	printf("\n");
	switch (choose)
	{
	case 1:
		printf("Enter two numbers: ");
		scanf_s("%d%d", &x, &y);
		printf("Min: %d\n", min(x, y));
			break;
	case 2:
		printf("Enter two numbers: ");
		scanf_s("%d%d", &x, &y);
		printf("Max: %d\n", max(x, y));
			break;
	case 3:
	printf("Enter a number: ");
	scanf_s("%d%d", &x, &y);
	printf("Square: %d\n", square(x));

	break;
	case 4:
		printf("Enter a number: ");
		scanf_s("%d%d", &x, &y);
		printf("Cube: %d\n", cube(x));

	case 5:

		printf("Enter a number: ");
	 scanf_s("%d%d", &x, &y);
		printf("Absolute: %d\n", absolute(x));

		break;
	
	default:
		break;
		
	}
	

	return 0;
}






void menu() {
	printf("\n");
	printf("***************\n");
	printf("*    MENU     *\n");
	printf("***************\n");
	printf("1-Maksimum");
	printf("2-Minimum");
	printf("3-kare al");
	printf("4-kup al");
	printf("5-mutlak değer");

}


int min(int x,int y) {
	if (x < y) {
		return x;
	}
	else {

		return y;
	}
}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {

		return y;
	}
}
int square(int x) {
	return x * x;
}

int cube(int x) {
	return x * x * x;
}

int absolute(int x) {
	if (x < 0) {
		return x*(-1);
	}
	else {
		return x;
	}
}