#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int i, dice, howMany[7] = { 0,0,0,0,0,0,0 };

	srand(time(NULL));
	for (i = 1; i < 100; i++) {
		dice = rand() % 6 + 1;   //1 ile 6 arasi rastgele sayi
		howMany[dice]++;
	}
	printf("Zar numarasi\t  Kac defa geldi\n");
	for (i = 1; i < 7; i++) {
		printf("%d\t\t%d\n", i, howMany[i]);
	}
	return 0;
}
