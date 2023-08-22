#include <stdio.h>
#include<stdlib.h>

long faktoriyel(long);

void main()
{
	int i;
	for (i = 1; i <= 10; i++)

		printf("%2d! = %ld\n", i, faktoriyel(i));

	system("pause");
}
long faktoriyel(long sayi)
{
	if (sayi <= 1)
		return 1;
	else
		return (sayi * faktoriyel(sayi - 1));
}