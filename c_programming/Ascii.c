/*ASCII ==> American Standard Code for Information Interchange

A ==> 65, Z ==> 90 a-z ==> 97-122
0 to 255
*/
/* Typecasting */
// Pattern ==> nested for
#include<stdio.h>
void main()
{
    int n = 65,i;
    char ch = 'Z';
    printf("%c ",n);
    printf("%d",ch);
    for(i=0;i<=255;i++)
    {
        printf("\n%d = %c",i,i);
    }
}

