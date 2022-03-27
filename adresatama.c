#include <stdio.h> 

int main() {

    char c = 'e';
    char *g = &c;

    printf("c degiskeninin adresi : %X \n",&c);

    printf("c degiskeninin adresi : %X \n",g);

    return 0;
}