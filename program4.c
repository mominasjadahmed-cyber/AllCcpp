//Read sides of hexagon and find its area 
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("\n Enter the area: ");
    scanf("%f",&a);
    a=(3*sqrt(3)/2)*a;
    printf("/n the area of hexagon=%f",a);
    return 0;
}