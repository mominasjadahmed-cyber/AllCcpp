#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n,i,a,b;
    printf("\n enter the numbers of the elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    printf("\n Enter the data stored:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n The data at alocated memory:");
    for(i=0;i<n;i++)
    {
        printf("\n %d",*(ptr+i));
    }

    printf("\nEnter the new data alocation: ");
    scanf("%d",&a);
    ptr=(int*)realloc(ptr,a*sizeof(int));
    printf("\n Enter the new data at the reallocated :");
    for(i=n;i<a;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n After reallocation the data is:");
    for(i=0;i<a;i++)
    {
        printf("\n %d",*(ptr+i));
    }

    printf("\n Enter the new data to allocate (reduce):");
    scanf("%d",&b);
    ptr=(int*)realloc(ptr,b*sizeof(int));
    printf("\n After reallocation the data is:");
    for(i=0;i<b;i++)
    {
        printf("\n %d",*(ptr+i));
    }

    return 0;
}
