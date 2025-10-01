#include<stdio.h>
#include "defineprg.c"
#define PI 3.1414
#define AREA(r) PI*r*r 
#define VERSION 3
#define MODEL 2025
#define DISPLAY(n) printf("\n My NAme is %s",n)
int main()
{
    printf("\n Welcome to c");
    greeting();
    FutureSkills(); 
    printf("\n %f",PI);
    printf("\n %f",AREA(10));
    printf("\n %d",VERSION);
    printf("\n %d",MODEL);
    DISPLAY("ASJAD");
    return 0;
}