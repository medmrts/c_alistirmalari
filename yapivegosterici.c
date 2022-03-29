#include <stdio.h>

struct futboltakim{
    char *takimisim;
    int kurulusyili;
    int oyandigilig;
    int ligsirasi;
    int sampiyonluksayisi;
};

int main(){
    struct futboltakim a;
    struct futboltakim *b;
    b = &a;

    (*b).takimisim = "besiktas";
    (*b).kurulusyili = 1903;
    (*b).oyandigilig = 1;
    (*b).ligsirasi = 1;
    (*b).sampiyonluksayisi = 11;


    printf("takim isim:%s\n",(*b).takimisim);
    printf("kurulus yili:%d\n",(*b).kurulusyili);
    printf("oynadigi lig:%d\n",(*b).oyandigilig);
    printf("lig sirasi:%d\n",(*b).ligsirasi);
    printf("sampiyoluj sayisi: %d\n",(*b).sampiyonluksayisi);

    return 0;
}