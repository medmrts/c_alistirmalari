#include <stdio.h>

int main()
{
    int sayi= 123;
    printf("%d \n",sayi);
    printf("%6d \n",sayi);
    printf("%06d \n",sayi);
    printf("%2d\n",sayi);

    double sayi2 = 123.456;
    printf("%10.3f\n",sayi2);
    printf("%010.3f\n",sayi2);
    printf("%-07f",sayi2);



    return 0;
}