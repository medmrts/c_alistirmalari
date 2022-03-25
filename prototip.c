#include <stdio.h>

int topla(int,int);

int main() {
    int toplam = 0;
    toplam = topla(3,4);
    printf("%d",toplam);

    return 0;
}

int topla(int a,int b) {
    int c = 0;
    c = a+b;
    return c;
}