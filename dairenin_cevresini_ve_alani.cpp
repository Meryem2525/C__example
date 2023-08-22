#include <stdlib.h>
#include <stdio.h>


int main() {
       
	const float PI = 3.14;
	float radius;

	printf("Enter the radius of the circle : ");
	scanf_s("%f", &radius);

	float circumference = 2 * PI * radius;
	float area = PI * radius * radius;

	printf("circle circumference =%f\n", circumference);
	printf("area of the circle=%f\n", area);

	return 0;
}
