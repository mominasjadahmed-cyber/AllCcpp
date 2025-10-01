//This program is to demonstrate the array concept in C language.
#include <stdio.h>
int main()
{
    int a[10]={54,32,45,78,64,42,46,47,62,79},i;
    
    for(i=0;i<10;i++)
    
    {
        printf("\n a[%d]=%d",i,a[i]);
    }
    printf("\n Enter the 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n After the entering value: ");
    for(i=0;i<10;i++)
    {
        printf("\n a[%d]=%d",i,a[i]);
    }
    


   
   
    return 0;

}