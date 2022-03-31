#include <stdio.h>

int main(){

    FILE *ptdosya;
    char veri[50];
    char dosyaismi[10];

    printf("bir cumle giriniz");
    gets(veri);

    if((ptdosya = fopen("C:\\Users\\mehme\\OneDrive\\Desktop\\deneme.txt","w"))==NULL) {
        printf("dosya acilamadi");
        return 0;
    }

    fprintf(ptdosya,"%s",veri);

    printf("veriler yazdirildi");

    fclose(ptdosya);

    return 0;
}