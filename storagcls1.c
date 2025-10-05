#include<stdio.h>
int x=100;
void count()
{
    static int c;
    c++;
    printf("\n %d",c);
    printf("\n %d",x);
}
int main()
{
    count();
    count();
    count();
    return 0;
}
