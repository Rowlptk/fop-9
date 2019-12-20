/*syntax:

    if(condition)
    {
        // statements
    }
*/
//positive check

#include<stdio.h>
// Grade
80-100 ==> A
60-79 ==> B
40-59 ==> C
0-39 ==> Fail
0-,100+ ==> doesnot exist
(n>=80 && n<=100)
void main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number is Positive! ");
    }
    else if(n==0)
    {
        printf("Number is Zero! ");
    }
    else {
        printf("Number is negative!");
    }
}











