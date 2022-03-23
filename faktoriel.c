#include <stdio.h>

int main()
{
    int i=1;
    int sayi;
    double faktoriyel = 1;

    printf("faktorieli bulunacak sayiyi giriniz : ");
    scanf("%d",&sayi);

    for (i=sayi;i>1;i--)
    {
        faktoriyel = faktoriyel*i;
    }
    printf("%d! = %f",sayi,faktoriyel);

    return 0;
}