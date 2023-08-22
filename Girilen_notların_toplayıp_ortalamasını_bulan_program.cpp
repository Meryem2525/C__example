#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	float examGrade, sumGrade;
	i = 1;
	examGrade = 0.0;
	sumGrade = 0.0;
	do
	{
		printf("%d th exam grade: ", i);
		scanf_s("%f", &examGrade);
		if (examGrade == 0) {
			break;
		}
		if (examGrade < 0) {
			printf("Please enter a positive number\n");
			continue;
		}
		else {
			sumGrade += examGrade;
		}
		i++;
	} while (examGrade!=0);

	printf("\n you entered %d exam grades\n", i - 1);
	printf("average:%f\n", sumGrade / (i - 1));
	
	
   
	return 0;
}

