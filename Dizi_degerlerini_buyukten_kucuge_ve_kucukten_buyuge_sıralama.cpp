#include <stdio.h>
#include <stdlib.h>

void sortIt();
void writeTheArray();
void writeTheArrayReverse();

int i;
int numbers[7];

int main() {

	printf("Enter array numbers: ");
	for (i = 0; i < 7; i++) 
	{
	scanf_s("%d", &numbers);
	}

	printf("\n Before sorting\n");
	writeTheArray();
	printf("\n The array is sorting");
	sortIt();
	printf("\n After sorting\n");
	writeTheArrayReverse();
	return 0;
}
 void sortIt() {
	 int i,j, reserve;
	 for (i = 0; i < 7; i++)
	 {
		 for ( j = 0; j < 7; j++)
		 {
			 if (numbers[j] < numbers[j]) {
				 reserve = numbers[i];
				 numbers[i] = numbers[j];
				 numbers[j] = reserve;
			 }
		 }
	 }

}

 void writeTheArray() {
	 for (i = 0; i < 7; i++)
	 {
		 printf("%d", numbers[i]);
	 }
	 printf("\n");
 }
 void writeTheArrayReverse(){

	 for  (i = 6; i > 0; i--)
	 {
		 printf("%d", numbers[i]);
	 }
	 printf("\n");
 }