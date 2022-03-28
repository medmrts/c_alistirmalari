#include <stdio.h>

int main(){

    char chdizi[4] = {'a','b','c','d'};
    int intdizi[4] = {1,2,3,4};
    int i = 0;

    printf("chdizi elemanlarinin icerigi : \n----------\n");
    for(i=0;i<4;i++){
        printf("chdizi(%d) : %c\n",i,*(chdizi + i));
    }

    printf("\nintdizi elemanlarinin icerigi :\n----------\n");
    for(i=0;i<4;i++){
        printf("intdizi(%d) : %d\n",i,*(intdizi+i));
    }

    printf("\nchdizi elemanlarinin adresleri : \n----------\n");
    for(i=0;i<4;i++){
        printf("&chdizi(%d) : %x\n",i,chdizi+i);
    }

    printf("\nintdizi elemanlarinin adresleri : \n------------\n");
    for(i=0;i<4;i++){
        printf("&intdizi(%d) : %x\n",i,intdizi +i);
    }

    return 0;
}