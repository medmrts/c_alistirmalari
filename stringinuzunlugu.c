#include <stdio.h>

int uzunlugunubul(char *);

int uzunlugunubul(char *chpt) {
    int i=0;

    while (*(chpt+i)!= '\0'){
        i++;
    }
    return i;
}

int main(){

    char *chpt = "zaman hanci,bulut yolcu...";
    int uzunluk = 0;

    uzunluk = uzunlugunubul(chpt);
    printf("stringin uzunlugu: %d", uzunluk);

    return 0;

}