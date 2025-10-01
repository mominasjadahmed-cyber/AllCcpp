#include<stdio.h>

int fact(int n)
{
    int f;
    if(n==0 ||n==1)
        return 1;
    else
        f=n*fact(n-1);
        return f;
}
int main()
{
    int N,F;
    printf("\n Enter the number: ");
    scanf("%d",&N);

    F=fact(N);
    printf("\n Factorial of %d=%d",N,F);


    return 0;
}