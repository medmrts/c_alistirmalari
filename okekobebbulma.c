#include <stdio.h>

int okekbul(int *, int *);
int obebbul(int *, int *, int *);

int okekbul(int *ipt01, int *ipt02){
    int buyuksayi = 0;
    int okek = 0;

    if(*ipt01>*ipt02) 
        buyuksayi = *ipt01; 
    else buyuksayi = *ipt02;

    okek =buyuksayi;

    while(okek % *ipt01 != 0 || okek % *ipt02 !=0){
        okek +=buyuksayi;
    }

    return okek;
}

int obebbul(int *ipt01, int *ipt02, int *okekpt){
    return (*ipt01 * *ipt02)/ *okekpt;
}

int main(){

    int sayi01 = 0;
    int sayi02 = 0;
    int okek = 0;
    int obeb = 0;

    printf("iki sayi giriniz : ");
    scanf("%d%d", &sayi01, &sayi02);

    okek = okekbul(&sayi01, &sayi02);
    printf("\nokek: %d\n", okek);

    obeb = obebbul(&sayi01,&sayi02,&okek);
    printf("obeb: %d",obeb);

return 0;
}