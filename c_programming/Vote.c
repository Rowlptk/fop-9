#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    (age>=18)?printf("You can Vote!"):printf("Sorry! you are still a kid!");
}
