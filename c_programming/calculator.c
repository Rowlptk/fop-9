// calculator
#include<stdio.h>
void main()
{
    float n1,n2;
    char ch;
    printf("Enter two Numbers : ");
    scanf("%f%f",&n1,&n2);
    printf("Press : \n+ to sum\n- to subtract\n* to multiply\n/ to divide\n  Select : ");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        printf("%.2f + %.2f = %.2f",n1,n2,(n1+n2));
        break;
    case '-':
        printf("%.2f - %.2f = %.2f",n1,n2,(n1-n2));
        break;
    case '*':
        printf("%.2f * %.2f = %.2f",n1,n2,(n1*n2));
        break;
    case '/':
        printf("%.2f / %.2f = %.2f",n1,n2,(n1/n2));
        break;
    default:
        printf("Invalid Option!");
    }
}

loop ==>  while, do..while, for ==> patterns





