
#include <stdio.h>
#include <stdlib.h>


void f(int*, int);

void main()
{
	int i = 5, j = 10;
	f(&i, j);
	printf("%d\n", i + j);
	system("pause");
}
void f(int* p, int m)
{
	m = m + 5;
	*p = *p + m;
	return;
}