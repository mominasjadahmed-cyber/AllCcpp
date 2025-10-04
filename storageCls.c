#include<stdio.h>

void display()
{
    int a=100;
    printf("\n display %d",a);
}
int main()
{
    int a=25,b=4;
    
    display();
    printf("\n main %d",a);
    printf("\n %d",b);
    
    return 0;
}