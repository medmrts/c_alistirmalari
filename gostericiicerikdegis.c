#include <stdio.h>

int main() {

    char ch01 = 'a';
    char ch02 = 'b';

    char *cpt01 = &ch01;
    char *cpt02 = &ch02;
    char *temp;

    printf("cpt01 gösterdigi deger : %c\n", *cpt01);
    printf("cpt02 gösterdigi deger : %c\n", *cpt02);

    printf("\ngostericilerin icerigi degisiyor...\n\n");
    temp = cpt01;
    cpt01 = cpt02;
    cpt02 = temp;

    printf("cpt01 gösterdigi deger : %c\n", *cpt01);
    printf("cpt02 gosterdigi deger : %c\n", *cpt02);

    return 0;
}