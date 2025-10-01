#include<stdio.h>

int fib(int n)
{
    int f;
    if(n==0 || n==1)
        return 1;
    else
    f=fib(n-1)+fib(n-2);
    return f;


}
int main()
{
    int i;
    for(i=0;i<10;i++)
        printf("\n %d",fib(i));
    return 0;
}