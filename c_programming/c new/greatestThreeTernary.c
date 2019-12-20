#include<stdio.h>

void main()
{
    int n1,n2,n3;
    printf("Enter Three Numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    (n1>n2 && n1>n3)?printf("n1 is greater"):
        ((n2>n3)?printf("n2 is greater"): printf("n3 is greater"));
}

// conditionals ==> if , if..else, if..else if ...else, nested if , switch.. case
