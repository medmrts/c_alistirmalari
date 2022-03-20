#include <stdio.h>

int main()
{
    int tekkitapfiyat = 5;
    int siparismiktari = 0;
    float indirimorani = 0;
    float indirimsiztutar = 0;
    float indirimtutari = 0;
    float toplamtutar = 0;

    printf("siparis adetini giriniz: ");
    scanf("%d",&siparismiktari);

    //orani belirle:

    if (siparismiktari >=50){
        indirimorani = 0.25;
    }
    else{
        if (siparismiktari>= 20 && siparismiktari < 50)
        indirimorani = 0.15;
        else {
            if (siparismiktari >= 10 && siparismiktari <20)
            indirimorani = 0.1;
        }
    }
    //indirimsiz tutarı hesapla ve yaz
    indirimsiztutar = siparismiktari * tekkitapfiyat;
    printf("indirimsiz tutar: %5.3f TL.\n", indirimsiztutar);

    //indirim tutarını hesapla ve ekarana yaz
    indirimtutari = siparismiktari * tekkitapfiyat * indirimorani;
    printf("indirim tutari: %5.3f TL\n", indirimtutari);

    //toplam tutarı yaz
    toplamtutar = indirimsiztutar - indirimtutari ;
    printf("siparislerinizin toplam tutari: %5.3f TL\n", toplamtutar);

    return 0;

}