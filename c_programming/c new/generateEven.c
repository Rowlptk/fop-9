//1 to 50 samma ==> even numbers
// multiple 3 but should not be a multiple of 9 generate from 30 to 90



/*#include<stdio.h>

void main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}*/

// prime numbers generate from 1 to 30
// check prime number

#include<stdio.h>

void main()
{
    int i;
    for(i=30;i<=90;i++)
    {
        if(i%3==0 && i%9!=0)
        {
            printf("%d\n",i);
        }
    }
}
















