#include <stdio.h>

int main ()
{
    int tamsayi = 7;
    unsigned int utamsayi = 55000;

    short kisatam = 30000;
    unsigned short ukisatam = 60000;

    long uzuntam = 345678123;
    unsigned long uuzuntam = 4001239868;

    char karakter = 123;
    unsigned char ukarakter = 252;

    double realdouble = 97334.34252;
    float realfloat = 345.34;

    printf("tamsayi: %d\n",tamsayi);
    printf("isaretsiz tamsayi: %u\n",utamsayi);

    printf("kisa tamsayi: %d\n",kisatam);
    printf("isaretsiz tamsayi: %u\n",ukisatam);

    printf(" uzun tamsayi: %ld\n",uzuntam);
    printf("isaretsiz uzun tamsayi: %u\n",uuzuntam);

    printf("karakter: %d\n",karakter);
    printf("isaretsiz karakter: %d\n",ukarakter);   

    printf("double: %f\n",realdouble);
    printf("float: %f\n",realfloat);  
}