#include<stdio.h>
extern x=100;
void display()
{
    printf("\n %d",x);
}

int main()
{
    display();
    printf("\n %d",x);
    return 0;
}