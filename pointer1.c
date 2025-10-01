#include<stdio.h>
int main()
{
    int x,*p1;
    float y,*p2;
    char c,*p3;

    x=200;
    p1=&x;
    printf("\nThe address of p1 = %u",p1);

    y=23.23;
    p2=&y;
    printf("\nThe address of p2 = %u",p2);

    c='A'; 
    p3=&c;
    printf("\nThe address of p3 = %u",p3);

    printf("\nThe value of p1 = %d",*p1);

    printf("\nThe value of p2 = %f",*p2);

    printf("\nThe value of p3 = %c",*p3);

    return 0;
}