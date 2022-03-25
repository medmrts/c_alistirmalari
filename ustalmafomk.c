#include <stdio.h>

double usal(double a,int b)
{
    double sonuc = 1;
    int i=0;
    for(i=0;i<b;i++){
        sonuc*=a;
    }
    return sonuc;
}

int main(){
    double taban= 0.0;
    int us = 0;
    double sonuc = 0.0;
    printf("taban ve us değerlerini giriniz: ");
    scanf("%lf%d",&taban,&us);

    sonuc = usal(taban,us);

    printf("%f uzeri %d : %f", taban,us,sonuc);

    return 0;
}