//callocation operationsis perform
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("\n Enter data to store ");
    for(i=0;i<n;i++)    
    {
        scanf("%d",(ptr+i));
    }
    printf("\n the data at the allocated memory");
    for(i=0;i<n;i++)
    {
        printf("\n %d",*(ptr+i));
    }

    

    return 0;
}