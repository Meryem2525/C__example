#include <stdio.h>
#include <stdlib.h>
int main() {
	int monthNumber;

	printf("which month: ");
	scanf_s("%d", &monthNumber);

	switch (monthNumber)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:  printf("there are 31 days in the %dth month\n", monthNumber);
		break;

	case 2: printf("there are 28 days in the %dth month\n", monthNumber);
		break;
	case 4:
	case 6:
	case 9:
	case 11: printf("there are 30 days in the %dth month\n", monthNumber);
	default:printf("Please enter 1 to 12 numbers");
		break;
	}
	return 0;
 }
