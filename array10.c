#include <stdio.h>
int main()
{
    int i,j,n,array[10],temp;
    printf("\nEnter thr numbers of elements: ");
    scanf("%d",&n);
    printf("\n Enter %d elements: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("\n the actual array:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",array[i]);
        
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\nthe sorted array:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
        printf("\n%d",array[i]);
        for(j=0;i<n;i++)
        {
            printf("\n%d",array[i]);
        }


    return 0;
}