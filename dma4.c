/*
Dynamic Memory Allocation
malloc
free
realloc
    reallocates the allocated memory
    10 integer          40
    5 reallocate        20
    15 reallocate       60
calloc
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{

    int *ptr,n,i,r,f;
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    
    /*
    ptr=(int*)malloc(n*sizeof(int));
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

    printf("\n Enter the new allocation size:");
    scanf("%d",&r);
    ptr=(int*)realloc(ptr,r*sizeof(int));
    
    printf("\n enter new data at the reallocated space:");
    for(i=n;i<r;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("\n After Reallocation the data is ");
    for(i=0;i<r;i++)
    {
        printf("\n %d",*(ptr+i));
    }

    printf("\n enter the space to reallocate (reduce)");
    scanf("%d",&f);
    ptr=(int*)realloc(ptr,f*sizeof(int));
    printf("\n After Reallocation the data is ");
    for(i=0;i<f;i++)
    {
        printf("\n %d",*(ptr+i));
    }
    */

return 0;
}