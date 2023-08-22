#include <stdio.h>
#include <stdlib.h>

int usAlma(int taban, int us) {
	if (us == 0)
		return 1;
	else if (us % 2 == 0)
		return usAlma(taban * taban, us / 2);
	else
		return taban * usAlma(taban * taban, (us - 1) / 2);
}
int main() {
	int taban, us;
	printf("Taban: ");
	scanf_s("%d", &taban);
	printf("Us: ");
	scanf_s("%d", &us);
	printf("%d uzeri %d = %d\n", taban, us, usAlma(taban, us));
	return 0;
	
}

