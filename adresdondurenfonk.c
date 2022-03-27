#include <stdio.h>
#include <math.h>

float *karekokal(float *);

float *karekokal(float *fpt) {
    *fpt = sqrt(*fpt);
    return fpt;
}

int main(){

    float sayi = 0;
    float *pt;

    printf("karekoku alinacak sayiyi giriniz: ");
    scanf("%f",&sayi);

    pt = karekokal(&sayi);
    printf("karekoku: &f",*pt);

    return 0;
}