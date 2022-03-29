#include <stdio.h>
#define MAX 100

int main(){

    #if MAX >1000
        printf("max 1000 den buyuk");
    #else 
        printf("max 1000 den kucuk");
    #endif

    return 0;
}