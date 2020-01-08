// multiuser login
#include<stdio.h>
void main()
{
    char usr[3][20] = {"admin","it","mgmt"};
    char pwd[3][20] = {"admin","it123","mgmt123"};
    char uin[20],pin[20];
    int i,j,flag,flag1;
    for(i=1;i<=3;i++)
    {
        flag = 0;
        flag1 = 0;
        system("cls");
        printf("Attempt Remaining %d\n",(4-i));
        printf("Enter your username : ");
        gets(uin);
        printf("Enter your password : ");
        gets(pin);
        for(j=0;j<=2;j++)
        {
            if(strcmp(usr[j],uin)==0)
            {
                flag = 1;
                //printf("Welcome %s",uin);
                break;
            }
        }
        //printf("%d",j);
        if((flag == 1)&&(strcmp(pwd[j],pin)==0))
        {
            //printf("Welcome %s",uin);
            flag1 = 1;
            break;
        }

    }
    system("cls");
    if(flag1 == 1)
    {
        printf("\nWelcome to your Account %s\n",uin);
    }
    else
    {
        printf("\nAttempt Remaining %d",(4-i));
        printf("\nYour Account is Locked !\n");
    }

}
    /*char usr[40] = "apple";
    char user[5][40] = {"admin","ram","shyam","hari","sita"};
    puts(usr);
    puts(user[1]);
    gets(user[1]);
    puts(user[1]);*/

