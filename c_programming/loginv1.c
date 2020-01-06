#include<stdio.h>

void main()
{
    char usr[20], pwd[20];
    printf("Enter your username : ");
    gets(usr);
    printf("Enter your password : ");
    gets(pwd);
    if((strcmp(usr,"admin")==0)&&(strcmp(pwd,"123")==0))
    {
        printf("login successful!");
    }
    else
    {
        printf("login failed!");
    }
}
