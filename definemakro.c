#include <stdio.h>
#define MAX(sayi1,sayi2) (sayi1>sayi2) ? sayi1 : sayi2

int main(){

    printf("MAX(2,3) : %d\n",MAX(3,8));
    printf("MAX(9,2) : %d\n",MAX(9,2));
    printf("MAX(7,7) : %d\n",MAX(7,7));

    return 0;  
}