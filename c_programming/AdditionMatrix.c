#include<stdio.h>

void main()
{
    int x[3][3], y[3][3], i, j;
    printf("Fill First (3x3) Matrix : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("Fill Second (3x3) Matrix : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    printf("The Sum of Two Matrix is : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",(x[i][j] + y[i][j]));
        }
        printf("\n");
    }

}
