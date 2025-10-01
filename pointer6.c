// Function pointer
#include<stdio.h>
int add(int a,int b)
{
    return a+b;

}

int main()
{
    int (*ptr)(int,int);
    ptr=add;
    printf("\n The Addition =%d",ptr(3,4));


    return 0;
}