#include<stdio.h>
int main()
{
    int a1[5]={2,46,78,34,63},i,j,n,temp;
    int a2[5]={75,87,4,785,45};
    int large[5];

    printf("\nEnter the elements of the first array: ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a1[5]);

    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a1[i]>a1[j])
            {
                temp=a1[i];
                a1[i]=a1[j];
                a1[j]=temp;
            }
            
            if(a2[i]>a2[j])
            {
                temp=a2[i];
                a2[i]=a2[j];
                a2[j]=temp;
            }
        }
    }
    printf("\n The first array is: ");
    for(i=0;i<5;i++)
    {
        printf("%5d ",a1[i]);
    }

    printf("\n The second array is: ");
    for(i=0;i<5;i++)
    {
        printf("%5d ",a2[i]);
    }

    for(i=0;i<5;i++)
    {
        if(a1[i]>a2[i])
        {
            large[i]=a1[i];
        }
        else{
            large[i]=a2[i];
        }
    }
    printf("\n The largest array is: ");
    for(i=0;i<5;i++)
    {
        printf("%5d ",large[i]);
    }
    


    return 0;
}