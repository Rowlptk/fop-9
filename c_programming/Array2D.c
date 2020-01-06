#include<stdio.h>

void main()
{
    int m1[2][2],m2[2][2],i,j;
    printf("Fill 2 by 2 Matrix : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("The 2 by 2 Matrix Values are : \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
}
