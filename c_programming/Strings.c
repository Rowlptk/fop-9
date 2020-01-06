#include<stdio.h>
#include<string.h>
// strlen(str); ==> length of string
// strlwr(str); ==> lowercase permanently
// strupr(str); ==> uppercase permanently
// strrev(str); ==> reverse string permanently
// strcat(str1, str2) ==> right string ==> left concatenate ==> update left
// strcpy(str1, str2) ==> str2 copied to str1
// strcmp(str1,str2) ==> 0 ==> both equal
//                        -ve ==> str2 ==> right side
//                        +ve ==> str1 ==> left side
void main()
{
    char name[50], title[50];// = "abcdefghijklmnopqrstuvwxyz";

    //gets(name);
    gets(title);
    strcpy(name,title);
    //name = title;
    //if(name == title)
    //strcat(name, title);
    puts(name);
    puts(title);
    //printf("The length of string is %d\n",strlen(name));
    //strlwr(name);
    //printf("Lowercase : %s\n",name);
    //strupr(name);
    //printf("Uppercase : %s\n",name);
    //strrev(name);
    //printf("Reverse is : %s\n",name);
    //char name1[50];
    //char ch;
    //printf("%s",name);
    //printf("\nEnter a string : ");
    //scanf("%s",name1);
    //gets(name1);
    //printf("%s",name1);
    //puts(name1);
    //printf("\n");
    //ch = getchar();
    //putchar(ch);

}
