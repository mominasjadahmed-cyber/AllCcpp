#include <stdio.h>
int main()
{
    int i,n,array[20],even[20],odd[20],e,o;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n Enter %d element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("\n the actual array is: ");
    for(i=0;i<n;i++)
    {
        printf("%5d ",array[i]);
    }
    
    e=0;
    o=0;
    for(i=0;i<n;i++)
    {
        if (array[i]%2==0)
        {
            even[e]=array[i];
            e++;
        }
        else{
            odd[o]=array[i];
            o++;
        }
    }
    printf("\n The even numbers are: ");
    for(i=0;i<e;i++)
    {
        printf("%5d ",even[i]);
    }

    printf("\n The odd numbers are: ");
    for(i=0;i<o;i++)
    {
        printf("%5d ",odd[i]);
    }


    return 0;
}