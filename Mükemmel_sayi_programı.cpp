#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, j,sum, upperLimit;

	printf("Hangi sayiya kadar mükemmel sayi olsun?: ");
	scanf_s("%d", &upperLimit);

	for (i = 1; i <= upperLimit ; i++) {
		sum = 0;
		for (j = 1; j <= i / 2; j++) {
			if(i%j==0)
			sum += j;
		}
		if (sum == i) {
			printf("%d mukemmel bir sayidir\n",i);
		}
	}
	return 0;
}