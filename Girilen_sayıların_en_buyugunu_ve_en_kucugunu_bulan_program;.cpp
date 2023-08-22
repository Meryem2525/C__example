#include<stdio.h>
#include<stdlib.h>

int main() {

	int number , largestNumber=0, smallestNumber=0, i = 1;
	number = 0;
	do
	{
		printf("%dth number: ", i);
		scanf_s("%d", &number);

		if (number == 0) break;
		if (number < smallestNumber) smallestNumber = number;
		if (number > largestNumber) largestNumber = number;

		i++;
	} while (number!=0);
	


	printf("\n the largest number: %d\n", largestNumber);
	printf("\n the smallest number:%d\n", smallestNumber);
	return 0;
}