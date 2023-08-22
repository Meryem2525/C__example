#include <stdio.h>


//Klavyeden girilen bir sayıyı tersten yazdırma

int main()
{
    int sayideger[20], sayi, i = 0, k, toplam = 0;
    printf("Sayı gir:");
    scanf("%d", &sayi);
    while (sayi > 0)
    {
        sayideger[i] = sayi % 10;
        sayi /= 10;
        i++;
    }

    for (k = 0; k < i; k++)
        printf("%d", sayideger[k]);

    getchar(); getchar();
}

