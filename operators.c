#include<stdio.h>
#include<string.h>

int main()
{
    //assignment operators
    int a=24,b=30,c;
    
    a+=10;
    printf("\na=%d",a);

    a-=1;
    printf("\na=%d",a);

    a*=4;
    printf("\na=%d",a);

    a/=2;
    printf("\na=%d",a);

    //increment decrement operators

    c=a++;
    printf("\n c=%d \t a=%d ",c,a);

    c=a--;
    printf("\n c=%d \t a=%d ",c,a);
    

    



    

    
   


    return 0;

}