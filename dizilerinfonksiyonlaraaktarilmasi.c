#include <stdio.h>

void diziisle(int *);

void diziisle(int *tamsayilar){
    *tamsayilar = *tamsayilar * 2;
    *(tamsayilar+1) = *(tamsayilar +1) * 2;
    *(tamsayilar+2) = *(tamsayilar +2) * 2;
    *(tamsayilar+3) = *(tamsayilar +3) * 2;
    *(tamsayilar+4) = *(tamsayilar +4) * 2;   
}

int main(){

    int sayilar[5] = {1,2,3,4,5};
    int i=0;
    printf("dizinin fonksiyona gitmedem onceki durumu:\n");
    for(i=0;i<5;i++){
        printf("sayilar[%d] : %d\n",i,sayilar[i]);
    }

    diziisle(sayilar);

    printf("dizinin fonksiyona gittikten sonra durumu:\n");
    for(i=0;i<5;i++){
        printf("sayilar[%d] : %d\n",i,sayilar[i]);
    }

    return 0;
}