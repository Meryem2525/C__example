#include <stdio.h>
#include <stdlib.h>

int main() {

	char name[] = "Meyrema";

	printf("Enter your name: ");
	scanf_s("%c", &name);
	// scnaf_s sadece tek bir kelimeyi alır 
	// ama gets(); ise hepsini alır unutma
	printf("\n Your name is %s\n", name);


	return 0;
}
