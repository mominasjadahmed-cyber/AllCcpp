#include<stdio.h>
extern int x;
void display();
int main()
{
    display();
    printf("\n %d",x);
    return 0;
}