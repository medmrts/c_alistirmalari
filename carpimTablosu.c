#include <stdio.h>

int main()
{
    int sayi = 0;
    int index = 1;
    printf("1-10 arasinda bir sayi giriniz");
    scanf("%d",&sayi);

    if(sayi<1 || sayi>10)
    {
        printf("1-10 arasinda bir sayi girmelisiniz");
        return 0;
    }

    while  (index<=10)
    {
        printf("%d x %d = %d\n",sayi,index,sayi*index);
        index++;
    }
    return 0;
}