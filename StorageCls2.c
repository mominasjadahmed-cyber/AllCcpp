#include<stdio.h>
extern x;
void count()
{
    static int c=0;
    c++;
    printf("\n %d",c);
    printf("\t %d",x);
    
}
int main()
{
    count();
    count();
    count();
    count();
    count();
       
    return 0;
}