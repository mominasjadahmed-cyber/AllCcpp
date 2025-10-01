#include<stdio.h>
int main()
{
    int i,n,a[10],search,flag=0;
    printf("\nEnter the number of elements: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\n Enter the element to search: ");
    scanf("%d",&search);
    for(i=0;i<10;i++)
    {
        if(a[i]==search)
        {
            printf("\n Enter the element %d at index %d",search,i);
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        printf("\n The element %d is not found in the array ",search);

    }

    return 0;
}