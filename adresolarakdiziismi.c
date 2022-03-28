#include <stdio.h>

int main(){
    char karakterler[8];

    printf("ilk elemanin adresi: \t%X\n", &karakterler[0]);
    printf("dizinin ismi : \t%X\n",karakterler);

    return 0;
}