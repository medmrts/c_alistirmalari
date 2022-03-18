#include <stdio.h>

int main()
{
    int sayi1 = 0;
    int sayi2 = 0;

    printf("sayi giriniz\n");
    scanf("%d %d", &sayi1, &sayi2);

    if (sayi1 > sayi2)
    
        printf("ilk sayi daha buyuktur.");
    
    else {
        if (sayi2 > sayi1)
            printf("ikinci sayi daha buyuktur");
        
        else
        printf("girilen sayilar esittir");
    }
    return 0;
}