#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void myChartes(char*, int);

int main() {

	char charters[] = { 'M','e','y','r','e','m','a' };
	int  size;
	size = sizeof(charters) / sizeof(charters[0]);
	 
	myChartes(charters, size);
	return 0;
}
void myChartes(char* charters, int size) {

	int i = 0, j = 0;
	for (i = 0; i < size + 1; i++) {
		for (j = i; j < size; j++) {
			printf("%c ", *(charters + j));
		}
		for (j = 0; j < i; j++) {
			printf("%c ", *(charters + j));
		}
		printf("\n");
	}


}