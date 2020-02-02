#include<stdio.h>
// parameterless function
void add(); // function declaration
float sub(); // return type float

void main()
{
    float x;
    //add(); // function call
    //x = sub();
    //printf("\nsub = %f",x);
    printf("\n Sub v2 = %f",sub());
}

float sub()
{
    float a, b;
    printf("Enter two numbers : ");
    scanf("%f%f",&a,&b);
    //printf("sub = %f",(a-b));
    return (a-b);
}
// function definition
void add()
{
    int x, y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    printf("The sum is %d",(x+y));
}
