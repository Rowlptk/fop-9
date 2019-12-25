#include<stdio.h>

void  main()
{
    int i,n,m;
    printf("Enter a number to view Table: ");
    scanf("%d",&n);
    printf("Start Point : ");
    scanf("%d",&i);
    printf("Final point : ");
    scanf("%d",&m);
    for(i;i<=m;i++)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
    }
}
