#include<stdio.h>
int main()
{
    int n,i,array[10],max,min;
    printf("Enter the %d number of elements: ");
    scanf("%d",&n);
    printf("\n Enter %d elements: ",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%5d",&array[i]);
    }
    printf("\n The actual array is: ");

    for(i=0;i<n;i++)
    {
        printf("\n%d",array[i]);
    }
    
    max=array[0];
    min=array[0];
    for(i=1;i<n;i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
        
    }
    printf("\n The maximum number is %d:",max);
    printf("\n The minimum number is %d:",min);

    
  

    return 0;
}