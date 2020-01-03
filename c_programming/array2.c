#include<stdio.h>
// filter even numbers
void main()
{
    int x[5],i;
    printf("Enter 5 Values : \n");
    for(i=0;i<=4;i++)
    {
        printf("x[%d] = ",i);
        scanf("%d",&x[i]);
    }
    printf("\nThe Values stored in Array X are : \n");
    for(i=0;i<=4;i++)
    {
        printf("value %d = %d\n",i+1,x[i]);
    }
    printf("\nThe Even Numbers are : \n");
    for(i=0;i<=4;i++)
    {
        if(x[i]%2 == 0)
        {
            printf("%d\n",x[i]);
        }
    }
    printf("\nThe Odd Numbers are : \n");
    for(i=0;i<=4;i++)
    {
        if(x[i]%2 != 0)
        {
            printf("%d\n",x[i]);
        }
    }
}
array ==> 10 packet size ==> value insert ==> greatest, least;
