#include <stdio.h>

int main()
{
    int diyezsayisi=0;
    int i=0;
    int j=0;

    printf("diyez sayisinigiriniz: ");
    scanf("%d",&diyezsayisi);

    for(i=0;i<diyezsayisi;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}