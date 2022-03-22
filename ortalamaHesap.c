#include <stdio.h>

int main()
{
    int notsayisi = 0;
    int aktifnot = 0;
    float toplam = 0;
    float ortalama = 0;

    yeninotgir:

    printf("%d. notu giriniz: ",notsayisi + 1);
    scanf("%d",&aktifnot);

    if (aktifnot==-1)
    {
        ortalama = toplam / notsayisi;
        printf("\n%d nptun ortalamasi: %f", notsayisi,ortalama);
        return 0;
    }
    notsayisi++;
    toplam += aktifnot;

    goto yeninotgir;

    return 0;
}