#include<stdio.h>

void main()
{
    int ary[5] = {45,100,0,-34,1};
    printf("4th value = %d",ary[3]);

    ary[3] = 68;
    printf("\n4th value after = %d",ary[3]);

    printf("\n5th value = %d",ary[4]);

    printf("\nEnter 5th value : ");
    scanf("%d",&ary[4]);
    printf("5th value after = %d",ary[4]);
}
