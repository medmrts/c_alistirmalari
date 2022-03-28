#include <stdio.h>

int main(){

    char strdizi[15] = "bilgisayar";
    int i=0;

    while(*(strdizi+i) !='\0') {
        printf("%c\n", *(strdizi+i));
        i++;
    }
    return 0;
}