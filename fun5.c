/*
call by pointer
*/
#include <stdio.h>

void swap(int *m,int *n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
    printf("\n In  swap");
    printf("\n %d ",*m);
    printf("\n %d",*n);
    

}
int main()
{
    int a=100,b=500;
    
    swap(&a,&b);
    printf("\n After swap ");
    printf("\n %d ",a);
    printf("\n %d",b);

    return 0;
}