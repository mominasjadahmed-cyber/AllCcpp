#include<stdio.h>
int main()
{
    int x=10,y=20,z;
    printf("\n Enter the value of x= ");
    scanf("%d",&x);
    printf("\n Enter the value of y= ");
    scanf("%d",&y);
    z=x&y;
    z=x|y;
    printf("\n Enter the value of z=%d",z);
    printf("\n Enter the value of z=%d",z);
    z=x^y;
    printf("\n Enter the value of z=%d",z);
    z=x<<1;
    printf("\n Enter the value of z=%d",z);
    z=x>>1;
    printf("\n Enter the value of z=%d",z);
    ~z;
    printf("\n Enter the value of z=%d",z);
    


    return 0;
}