/*
call by value

*/
#include <stdio.h>

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\n %d ",x);
    printf("\n %d",y);
    

}
int main()
{
    int a=100,b=500;
    
    swap(a,b);
    printf("\n After swap ");
    printf("\n %d ",a);
    printf("\n %d",b);

    return 0;
}