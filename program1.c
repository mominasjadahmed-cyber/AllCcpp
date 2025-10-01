#include<stdio.h>
/*
//Read the temp from the user in celcius and convert it into K and F
int main()
{
    float c,f,k;
    printf("\n Enter temp in celcius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("\ntemp in F=%.2f",f);
    k=273+c;
    printf("\n temi in k=%.2f",k);
    scanf("%f",&c);
    return 0;
}  
*/

//Read the sides of a rectangle and calculate its area and parameter
int main()
{
    float lenght,width,area,perimeter,pi=3.1414;
    
    printf("\n Enter the lenght: ");
    scanf("%f",&lenght);
    printf("\n Enter the sides of width: ");
    scanf("%f",&width);
    area=lenght*width;

    printf("\nthe area of rec=%.2f",area);

    printf("\n Enter the lenght: ");
    scanf("%f",&lenght);
    printf("\n Enter the sides of width: ");
    scanf("%f",&width);
    perimeter=2*(lenght+width);
    
    printf("\nthe perimeter of rec=%.2f",perimeter);

    
    return 0;
}

    
