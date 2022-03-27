#include <stdio.h>

int main() {
    
    int a = 14;
    int *b;

    b = &a;
    printf("a nin degeri : %d\n",a);

    *b = 99;
    printf("a nin degeri : %d",a);

    return 0;
}