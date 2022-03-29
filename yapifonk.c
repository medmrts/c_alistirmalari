#include <stdio.h>

struct sekil
{
    int uzunluk;
    int genislik;
    int karesayisi;
};

void sekilciz(struct sekil cubuk);

void sekilciz(struct sekil cubuk){
    printf("uzunluk : %d\t\n",cubuk.uzunluk);
    printf("genislik : %d\t\n",cubuk.genislik);
    printf("kare sayisi : %d\t\n",cubuk.karesayisi);
}

int main(){
    struct sekil A;
    
    A.uzunluk = 4;
    A.genislik = 1;
    A.karesayisi = 4;

    sekilciz(A);

    return 0;
    
}
