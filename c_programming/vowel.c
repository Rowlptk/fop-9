#include<stdio.h>

void main()
{
    char ch;
    printf("Enter a Character : ");
    scanf(" %c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel!");
        break;
    default:
        printf("Consonant!");
    }
}
