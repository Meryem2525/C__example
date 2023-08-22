#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, size, big = 0, small = 0, bigIndex, smallIndex;
	int notes[100], studentsNo[100];
	printf("Enter class size: ");
	scanf_s("%d", &size);

	for ( i = 0; i < size; i++)
	{
		printf("Student No and Note: ");
	    scanf_s("%d%d", &studentsNo[i], &notes[i]);
	}
	
	for (i = 0; i < size; i++)
	{
		if (notes[i] > big) {
			big = notes[i];
			bigIndex = i;
		}
		if (notes[i] < small) {
			small = notes[i];
			smallIndex=i;
		}

	}

	printf("\n %d numarali ogrenci en yuksek notu (%d) almistir", studentsNo[bigIndex], big);
	printf("\n %d numarali ogrenci en dusuk notu (%d) almistir", studentsNo[smallIndex], small);

	return 0;
}
