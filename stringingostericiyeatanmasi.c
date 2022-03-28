#include <stdio.h>

int main(){

    char *strpt = "bilgisayar";
    int i=0;

    while (*(strpt+i) !='\0'){
        printf("%c\n",*(strpt+i));
        i++;
    }
    return 0;
}