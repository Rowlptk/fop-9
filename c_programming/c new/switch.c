//if.. else if.. else

//switch ... case ==> constant

#include<stdio.h>
void main()
{
    int n;
    printf("Enter a day number: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 13:
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Day number!");
    }
}



