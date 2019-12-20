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
