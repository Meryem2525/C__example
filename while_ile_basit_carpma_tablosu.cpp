#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, i;
	i = 1;
	number = 0;

	printf("Enter a number from 1 to 10: ");
	scanf_s("%d", &number);

	if (number < 1 || number > 10) {
		printf("Please don't to that\n");
		return 0;
	}

	while (i<=10)
	{
		printf("%d x %d =%d\n", number, i, number * i);
		i++;
	}
	return 0;
}
