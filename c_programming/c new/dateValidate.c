#include<stdio.h>

void main()
{
    int y,m,d;
    printf("Enter a Date [yyyy-mm-dd] : ");
    scanf("%d-%d-%d",&y,&m,&d);
    printf("Year = %d\nmonth = %d\nday = %d\n",y,m,d);
    if(y>=1000 && y<=9999)
    {
        //printf("Year is valid!\n");
        if(m>=1 && m<=12)
        {
            //printf("month is valid!\n");
            if(d>=1 && d<=30)
            {
                printf("Date is Valid!");
            }
            else
            {
                printf("Day is Invalid!");
            }
        }
        else
        {
            printf("month is invalid!");
        }
    }
    else
    {
        printf("Year is Invalid!");
    }
}


Assignment ==> 1-31==> month 1,3,5,7,8,10,12
                1-30 ==> month 4,6,9,11
                1-28 ==> month 2
                1-29 ==> month 2 year==> leap
