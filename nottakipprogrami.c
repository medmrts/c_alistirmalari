#include <stdio.h>

void notyazdir(int, int);
void tumnotlariyazdir();
double sinavortalamasibul(int);
int enyukseknotubul(int);
int endusuknotubul(int);

int edebiyatnotlari [9][4] = {
    {122, 12, 63, 94},
    {113, 67, 21, 78},
    {114, 90, 42, 76},
    {115, 54, 12, 65},
    {116, 100, 70, 87},
    {117, 98, 34, 67},
    {118, 56, 12, 32},
    {119, 12, 65, 30},
    {120, 87, 32, 10}
};

void notyazdir(int ogrencino, int hanginot) {

    int i=0,j=0;
    for(i=0;i<8;i++) 
    {
        if (edebiyatnotlari[i][0] == ogrencino)
        {
            printf("\nnumarasi : %d\n", edebiyatnotlari[i][0]);
            if(hanginot>0 && hanginot<4) 
            {
                printf("%d. notu: %d",hanginot,edebiyatnotlari[i][hanginot]);
            }
            else
            {
                printf("notlari : ");
                for(j=1;j<4;j++) 
                {
                    printf("%d ",edebiyatnotlari[i][j]);
                }
            }
            return;
        }
    }
    printf("aradiginiz kayit bulunamadi\n");
}
void tumnotlariyazdir() {
    int i=0,j=0;
    printf("no\ts1 s2 s3\n");
    printf("--\t--  --  --\n\n");
    for(i=0;i<9;i++) {
        printf("%d\t",edebiyatnotlari[i][0]);
        for(j=1;j<4;j++) {
            printf("%d ",edebiyatnotlari[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

double sinavortalamasibul(int hangisinav){
    int i=0;
    double ort = 0;
    int toplam = 0;

    if (hangisinav<1 || hangisinav>3) {
        printf("1-3 arasinda bir deer girmelisiniz \n");
        return 0;
    }
    for(i=0;i<9;i++) {
        toplam += edebiyatnotlari[i][hangisinav];
    }
    ort = toplam/9;
    return ort;
}

int enyukseknotubul(int hangisinav){
    int i=0;
    int max = 0;
    for(i=0;i<9;i++){
        if(edebiyatnotlari[i][hangisinav]>max){
            max=edebiyatnotlari[i][hangisinav];
        }
    }
    return max;
}

int endusuknotubul(int hangisinav){
    int i=0;
    int min=100;

    for(i=0;i<9;i++){
        if (edebiyatnotlari[i][hangisinav]<min){
            min = edebiyatnotlari[i][hangisinav];
        }
    }
    return min;
}

int main(){
    tumnotlariyazdir();
    notyazdir(123,2);
    printf("1. sinav ortalamasi : %f\n",sinavortalamasibul(1));
    printf("3. sinavin en yuksek notu : %i\n",enyukseknotubul(3));


    return 0;
}