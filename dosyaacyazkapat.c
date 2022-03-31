#include <stdio.h>

int main(){

    FILE  *ptdosya;
    ptdosya = fopen("C:\\Users\\mehme\\OneDrive\\Desktop\\deneme.txt","w+");

    putc('A',ptdosya);

    fclose(ptdosya);

    
    return 0;
}