#include<stdio.h>

void main()
{
    int year;
    printf("Enter a Year :  ");
    scanf("%d",&year);
    if((year%400==0)||((year%4==0)&&(year%100!=0)))
    {
        printf("%d year is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
}

year ==> 1000-9999
month ==> 1-12
day ==> 1-30




