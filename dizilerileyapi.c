#include <stdio.h>

int main(){

    int i= 0;
    struct  kitap
    {
        char *kitapisim;
        char *yazar;
        char *yayinevi;
        int sayfasayisi;
        int basimyili;
    };
    
    struct kitap teknikkitaplar[3];

    teknikkitaplar[0].kitapisim = "multisim";
    teknikkitaplar[0].yazar = "abdurrahman tasbasi";
    teknikkitaplar[0].yayinevi = "altas";
    teknikkitaplar[0].sayfasayisi = 266;
    teknikkitaplar[0].basimyili = 2002;

    teknikkitaplar[1].kitapisim = "pic programlama";
    teknikkitaplar[1].yazar = "orhan ";
    teknikkitaplar[1].yayinevi = "altas";
    teknikkitaplar[1].sayfasayisi = 280;
    teknikkitaplar[1].basimyili = 2004;   
    
    teknikkitaplar[2].kitapisim = "virsual basic";
    teknikkitaplar[2].yazar = "abdurrahman tasbasi";
    teknikkitaplar[2].yayinevi = "altas";
    teknikkitaplar[2].sayfasayisi = 267;
    teknikkitaplar[2].basimyili = 2005;

    for(i=0;i<3;i++){
        printf("%d. kitap---------\n",i+1);
        printf("kitap ismi : %s\n", teknikkitaplar[i].kitapisim);
        printf("yazar: %s\n",teknikkitaplar[i].yazar);
        printf("yayinevi : %s\n",teknikkitaplar[i].yayinevi);
        printf("sayfa sayisi : %d\n",teknikkitaplar[i].sayfasayisi);
        printf("basim yili : %d\n",teknikkitaplar[i].basimyili);
        putchar('\n');
    }

    return 0;
}