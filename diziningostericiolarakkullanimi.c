#include <stdio.h>

int main(){

    char karakterler[8] = {'a','b','c','d','e','f','g','h'};

    printf("ilk elemanin adresi : %X \n", karakterler);
    printf("son elemanin adresi : %X \n",&karakterler[7]);

    printf("ilk elemanin icerigi : %c \n",karakterler[0]);
    printf("son elamanin icerigi : %c \n",*(karakterler+7));

    return 0;
}