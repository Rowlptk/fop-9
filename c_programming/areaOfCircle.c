/*hint:
int ==> float
%d ==> %f

r = d/2;
a = pi*r*r;
*/
#include<stdio.h>
#include<math.h>
#define pi 3.1428
void main()
{
    float dia,rad,area;
    printf("Enter a Diameter : ");
    scanf("%f",&dia);
    rad = dia/2;
    //area = pi * rad * rad;
    area = pi * pow(rad,2);
    printf("The Area of a circle is %.2f",area);
}

//data types, escape sequence, format specifier, operator





