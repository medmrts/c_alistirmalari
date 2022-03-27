#include <stdio.h>

int main() {

    char c = 'e';
    int i = 99;
    double d = 0.44;

    char *cpt = &c;
    int *ipt = &i;
    double *dpt = &d;

    printf("ilk adresler:\n\n");
    printf("c nin ilk adresi : %X\tdegeri: %c\n",cpt,*cpt);
    printf("i nin ilk adresi : %X\tdegeri: %d\n",ipt,*ipt);
    printf("d nin ilk adresi : %X\tdegeri: %f\n\n\n",dpt,*dpt);

    cpt++;
    ipt+=3;
    dpt-=5;

    printf("sonraki adresler:\n\n");
    printf("c nin sonraki adresi : %X\tdegeri: %c\n",cpt,*cpt);
    printf("i nin sonraki adresi : %X\tdegeri: %d\n",ipt,*ipt);
    printf("d nin sonraki adresi : %X\tdegeri: %f\n",dpt,*dpt);

    return 0;
}