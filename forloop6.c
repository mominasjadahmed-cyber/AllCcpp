#include<stdio.h>
int main()
{
    int n,p,r=1,i;
    printf("\nEnter the number: ");
    scanf("%d%d",&n,&p);
    for(i=1;i<=p;i++)
    {
        r=r*i;
        printf("\n%d = %d",r,p);
    }
    printf("\nEnter number %d raised to %d =%d",n,p,r);
    return 0;
}