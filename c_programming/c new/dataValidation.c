/*Output:

    Enter first Number : -6
    please enter positive value: -3
    please enter positive value: -9
    please enter positive value: 5

    Enter second Number : -6
    please enter positive value: -3
    please enter positive value: -9
    please enter positive value: -3
    please enter positive value: 10

    5 + 10 = 15
*/

#include<stdio.h>
void main()
{
    int n1,n2;

    printf("Enter First Number: ");
    scanf("%d",&n1);
    while(n1<0)
    {
        printf("Please Enter Positive Value : ");
        scanf("%d",&n1);
    }

    printf("Enter Second Number: ");
    scanf("%d",&n2);
    while(n2<0)
    {
        printf("Please Enter Positive Value : ");
        scanf("%d",&n2);
    }

    printf("%d + %d = %d",n1,n2,(n1+n2));
}

















