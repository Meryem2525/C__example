#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10 
int main()
{
	int arr[MAX_SIZE];
	int i, toSearch, found;

	printf("10 adet eleman giriniz: \n");

	for (i = 0; i < MAX_SIZE; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("\nAramak istediginiz elemani giriniz: ");
	scanf_s("%d", &toSearch);

	found = 0;	for (i = 0; i < MAX_SIZE; i++)
	{
		if (arr[i] == toSearch)
		{
			found++;
		}
	}
	if (found > 0)
	{
		printf("\n%d sayisi %d kez dizide mevcuttur\n",toSearch, found);
	}
	else
	{
		printf("\n%d sayisi dizisi dizide bulunmamaktadir\n", toSearch);
	}
	system("pause");
}