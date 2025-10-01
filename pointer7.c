// funtion pointer with array
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int (*ptr [4])(int,int),i;
    ptr[0]=add;
    ptr[1]=sub;
    ptr[2]=mul;
    ptr[3]=div;

    for(i=0;i<4;i++)
    {
        printf("\n %d",ptr[i](4,8));
    }

    return 0;
}