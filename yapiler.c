#include <stdio.h>

int main(){

    struct ogrenci{
        char *isim;
        char *soyisim;
        int numara;
    };

    struct ogrenci a;

    a.isim = "murat";
    a.soyisim = "tasbasi";
    a.numara = 1212121212;

    puts(a.isim);
    puts(a.soyisim);
    printf("%d\n",a.numara);

    return 0;

}