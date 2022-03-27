#include <stdio.h>

int main() {

    int a = 45;
    double b = 4.5;
    char c='g';

    printf("a degiskeninin icerigi : %d\n",a);
    printf("b degiskeninin icerigi : %f\n",b);
    printf("c degiskeninin ixerigi : %c\n\n",c);

    printf("a degiskeninin bellekteki adresi : %X\n", &a);
    printf("b degiskeninin bellekteki adresi : %X\n", &b);
    printf("c degiskeninin bellkteki adresi : %X\n\n", &c);

    return 0;
}