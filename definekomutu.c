#include <stdio.h>
#define LES_SOZ_KATSAYI 0.3
#define LES_SAY_KATSAYI 0.7

int main(){

    int sozeldcs, sayisaldcs;
    float soztop, saytop;

    printf("sozel dogru cevap sayisini giriniz(max 80)");
    scanf("%d",&sozeldcs);

    printf("sayisal dogru cevap sayisini giriniz(max 80");
    scanf("%d",&sayisaldcs);

    saytop = (sozeldcs * LES_SOZ_KATSAYI) + (sayisaldcs * LES_SAY_KATSAYI);
    soztop = (sozeldcs * LES_SAY_KATSAYI) + (sayisaldcs * LES_SOZ_KATSAYI);

    printf("\nadayin yaklasik sozel puani : %5.2f\n",soztop);
    printf("adayin yaklasik sayisal puani : %5.2f\n",saytop);

    return 0;
}