#include<stdio.h>
#include<stdlib.h>

int main() {
	int bakiye = 5000;
	int islem, tutar;

	printf("Isleminizi seciniz :\n");
	printf("1. Para Cekme\n");
	printf("2. Para Yatirma\n");
	printf("3. Para Bakiye Sorgulama\n");
	scanf_s("%d", &islem);
	switch (islem) {
	case 1:
		printf("Cekmek istediginiz tutari giriniz : ");
		scanf_s("%d", &tutar);
		if (tutar > 1000) {
			printf("Yetersiz bakiye tekrar giriniz !!");
			scanf_s("%d", &tutar);
		}
		bakiye -= tutar;
		printf("Yeni Bakiyeniz : %d", bakiye);
		break;
	case 2:
		printf("Yatirmak istediginiz tutari giriniz : ");
		scanf_s("%d", &tutar);
		bakiye += tutar;
		printf("Yeni Bakiyeniz : %d", bakiye);
		break;
	case 3:
		printf("Bakiyeniz : %d\n", bakiye);
		break;
	}
	system("pause");
	return 0;
}
