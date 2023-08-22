#include <stdio.h>
#include <stdlib.h>


int main()
{
	int x = 20, z = 10, * y;
	y = &x;
	*y = *y + z;

	y = &z;
	*y = *y + *y;

	printf("x = %d, z = %d \n", x, z);
	system("pause");
}
