#include <stdio.h>

double kareal(double *dpt);

double kareal (double *dpt) {
    return *dpt * *dpt;
}

int main(){

    double sonuc;
    double sayi;

    printf("bir sayi giriniz: ");
    scanf("%lf",&sayi);

    sonuc = kareal(&sayi);
    printf("karesi : %f",sonuc);

    return 0;
}