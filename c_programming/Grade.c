#include<stdio.h>

void main()
{
    int m;
    printf("Enter your mark : ");
    scanf("%d",&m);
    if(m>=80 && m<=100)
    {
        printf("Grade A!");
    }
    else if(m>=60 && m<80)
    {
        printf("Grade B!");
    }
    else if(m>=40 && m<60)
    {
        printf("Grade C!");
    }
    else if(m>=0 && m<40)
    {
        printf("Fail!");
    }
    else
    {
        printf("Mark Doesnot exist!");
    }
}

(n%400==0)||((n%4==0)&&(n%100!=0))
1696-1704,  1996-2000
leap year ==> 1600 2000
                4|2016|504     100|2016|20
                  2016             2000
                  ------        ---------
                    0               16

                400|1700|4         4|1700|425    100|1700|17
                    1600             1700            1700
                    -------         -------         -------
                    100                 0               0




