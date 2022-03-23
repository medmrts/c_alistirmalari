#include <stdio.h>

int main()
{
    int kentmesafe = 450;
    int arac1_hiz = 40;
    int arac2_hiz = 65;
    int arac1_konum = 120;
    int arac2_konum = 0;
    int aktifsaat = 0;

    printf("saat\t\t");
    printf("1.arac konum\t");
    printf("2.arac konum\n");
    printf("-------\t\t------\t\t------\n\n");

    do {
        aktifsaat++;
        arac1_konum += arac1_hiz;
        arac2_konum += arac2_hiz;

        printf("%d\t\t",aktifsaat);
        (arac1_konum<kentmesafe) ? printf("%d\t\t",arac1_konum) : printf("arac vardi\t");
        (arac2_konum<kentmesafe) ? printf("%d",arac2_konum) : printf("arac vardi\t");
        printf("\n");
    }while(arac1_konum < kentmesafe || arac2_konum < kentmesafe);
    return 0;
}