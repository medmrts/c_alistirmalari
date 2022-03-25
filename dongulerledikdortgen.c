#include <stdio.h>

int main()
{
    int enuzunluk = 0;
    int boyuznunluk = 0;
    char karakter = 0;
    int i = 0;
    int j = 0;

    printf("en ve boy uzunlugu giriniz : ");
    scanf("%d%d", &enuzunluk,&boyuznunluk);
    printf("\n\n");

    karakter = 218;
    printf("%c",karakter);

    karakter = 196;
    for (i=0;i<enuzunluk;i++){
        printf("%c",karakter);
    }
    karakter = 191;
    printf("%c\n",karakter);

    for (i=0;i<boyuznunluk;i++)
    {
        karakter = 179;
        printf("%c",karakter);
        karakter = 32;
        for(j=0;j<enuzunluk;j++){
            printf("%c",karakter);
        }
        karakter = 179;
        printf("%c\n",karakter);
    }
    karakter = 192;
    printf("%c",karakter);

    karakter = 196;
    for(i=0;i<enuzunluk;i++){
        printf("%c",karakter);
    }
    karakter = 217;
    printf("%c\n",karakter);

    return 0;
}