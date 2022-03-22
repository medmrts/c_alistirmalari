#include <stdio.h>

int main()
{
    int sayi = 0;
    int index = 2;

    printf("test edilecek pozitif bir sayi giriniz");
    scanf("%d",&sayi);

    if(sayi<0)
    {
        printf("pozitif bir sayi giriniz");
        return 0;
    }
    while (index < sayi/2)
    {
        if (sayi%index == 0)
        {
            printf("%d sayisi %d sayisina bolunabildigi icin asal sayi olamaz",sayi,index);
            return 0;
        }
        index++;
    }
    printf("%d bir asal sayidir",sayi);
    return 0;

}