#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void main() {
	int sayi1, sayi2, sayi3, ort, a, b;
	printf("sayi gir: ");
	scanf_s("%d", &sayi1);
	printf("sayi gir: ");
	scanf_s("%d", &sayi2);
	printf("sayi gir: ");
	scanf_s("%d", &sayi3);
	if ((sayi1 > sayi2 && sayi1 < sayi3) ||
		(sayi1<sayi2 && sayi1>sayi3))
	{
		ort = sayi1;
		a = sayi2;
		b = sayi3;
	}
	else if ((sayi2 > sayi1 && sayi2 < sayi3) ||
		(sayi2<sayi1 && sayi2>sayi3))
	{
		ort = sayi2;
		a = sayi1;
		b = sayi3;
	}
	else
	{
		ort = sayi3;
		a = sayi1;
		b = sayi2;
	}
	if (abs(ort - a) >= abs(ort - b))
		printf("%d\n", b);
	else
		printf("%d\n", a);
	system("pause");
}