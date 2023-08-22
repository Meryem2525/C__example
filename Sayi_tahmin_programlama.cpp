#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
	int  guessNumber, randomNumber, guessCount, score = 200;
	srand(time(NULL));
	randomNumber = (rand() % 100) + 1;
	printf("1-100 arasında rastgele bir sayi tuttum\n ");
	printf("Tahmin et!\n");

	while (guessNumber!=-1)
	{
		printf("tahmin sayilarini gir: ");
		scanf_s("%d", &guessNumber);
		if (guessNumber == -1);
		break;
		if (guessNumber < 1 || guessNumber>100) {
			printf("Lütfen 1 ile 100 arasında giriniz\n: ");
			continue;
		}
		guessCount++;
		if (guessNumber == randomNumber) {
			printf("Tebrikler %d. seferde bildiniz", guessCount);
			break;
		}
		else {
			if (guessNumber > randomNumber) {
				printf("Daha küçük bir sayi giriniz\n");
				
			}
			else {
				printf("Daha büyük bir sayi giriniz\n");
			}
			score -= 10;
		}
	}
	printf("\n Puanin 100 uzerinden %d\n", score < 0 ? 0 : score);
	return 0;
}