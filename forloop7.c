#include <stdio.h>
int main()
{
    int n,d;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    for(d=2;d<=n/2;d++)
    {
        if (n%d==0)
        {
            printf("\n%d is not prime number",n);
            printf("\n%d is divisble by %d",n,d);
            break;
        }
    }
    if(d>n/2)
    {
        printf("\n%d is prime number",n);
    }

    return 0;
}