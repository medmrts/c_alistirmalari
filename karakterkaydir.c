#include <stdio.h>

void karakterkaydirekranayaz(char *,int);

void karakterkaydirekranayaz(char *chdizi,int diziboyu){

    int i=0, j=0;

    for(j=0;j<diziboyu+1;j++) {
        for(i=j;i<diziboyu;i++) {
            printf("%c", *(chdizi + i));
        }
        for(i=0;i<j;i++) {
            printf("%c", *(chdizi + i));
        }
        printf("\n");
    }
}

int main() {

    char karakterler[10] = {'b','i','l','g','i','s','a','y','a','r'};
    int i = 0;
    int boy = 10;

    karakterkaydirekranayaz(karakterler,boy);

    return 0;
}