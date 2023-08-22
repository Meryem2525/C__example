#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	double bugday = 1;
	double sumBugday = 0;


	for (i = 1; i <= 64; i++)
	{
		printf("%d. kare icin bilgine verilecek bugday sayisi: 20.0f\n", i, bugday);

		sumBugday += bugday;

		bugday *= 2;
	}
	printf("\n bilgine verilecek bugday sayisi: %20.0f\n", sumBugday);
	return 0;
}