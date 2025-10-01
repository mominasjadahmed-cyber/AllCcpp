//Read the radius of a circle and find its area and circumference
#include<stdio.h>
int main()
{
    float r,a,c,circum,pi=3.1414;
    printf("\n Enter the area: ");
    scanf("%f",&a);
    a=pi*r*r;
    printf("\n The area of circle=%.2f",a);


    printf("\n Enter the circum: ");
    scanf("%f",&circum);
    circum=2*pi*r;
    printf("\n The circum of circle=%.2f",circum);





    return 0;
}