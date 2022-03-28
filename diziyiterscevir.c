#include <stdio.h>

void diziyiterscevir(int *,int);

void diziyiterscevir(int *dizi,int boy){

    int i=0, temp=0;

    for(i=0;i<boy/2;i++){
        temp = *(dizi+i);
        *(dizi + i) = *(dizi + boy-1-i);
        *(dizi+boy-1-i) = temp;
    }
}

int main(){

    int dizi[5] = {'a','b','c','d','e'};
    int i=0, boy=5;

    for(i=0;i<5;i++){
        printf("%c ",dizi[i]);
    }

    diziyiterscevir(dizi,boy);

    printf("\n");
    for(i=0;i<5;i++){
        printf("%c ",dizi[i]);
    }

    return 0;
}