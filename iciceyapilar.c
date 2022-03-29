#include <stdio.h>

struct adaybilgi{
    char *isim;
    char *soyisim;
    char *lisansegitim;
    int yas;
    int lesnotu;
    float lisasnortalamasi;
    int tel;
};

struct mulakatkayit{
    char *mulakatiyapan;
    char *mulakattarih;
    struct adaybilgi aday;
    int mulakatnotu;
};

int main(){

    struct mulakatkayit mk01;

    mk01.mulakatiyapan = "berat";
    mk01.mulakattarih = "01.01.2000";
    mk01.aday.isim ="berat";
    mk01.aday.soyisim = "tassbasi";
    mk01.aday.lisansegitim ="hacettepe-iktisat";
    mk01.aday.yas = 21;
    mk01.aday.lesnotu = 77;
    mk01.aday.lisasnortalamasi = 2.52;
    mk01.aday.tel = 111111111;
    mk01.mulakatnotu = 90;

    printf("mulakati yapan:%s\n",mk01.mulakatiyapan);
    printf("aday isim: %s\n",mk01.aday.isim);
    printf("aday soyisim : %s\n",mk01.aday.soyisim);
    printf("aday mulakat sonucu : %d\n",mk01.mulakatnotu);

    return 0;
}