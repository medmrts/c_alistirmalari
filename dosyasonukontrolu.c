#include <stdio.h>

int main(){

    FILE *ptdosya;

    char ch;
    ptdosya =fopen("C:\\Users\\mehme\\OneDrive\\Desktop\\deneme.txt","r");

    do{
        ch = getc(ptdosya);
        printf("%c",ch);
    }while(ch!=EOF);

    printf("\n\ndosya sonuna gelindi");

    fclose(ptdosya);

    return 0;

}