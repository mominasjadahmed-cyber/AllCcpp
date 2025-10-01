/*Dma allocation 1*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("\n enter numebr of elements to allocate: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));    
    printf("\n Memory is allocated at = %u",ptr);
    for(i=0;i<n;i++)
    {
        *(ptr+i)=i*100;
    }
    printf("\n Fifth Location = %u",*(ptr+0));
    printf("\n Fifth Location = %u",*(ptr+1));
    printf("\n Fifth Location = %u",*(ptr+2));
    
    
    free(ptr);
    printf("\n After Deallocation ");
    /*
    printf("\n Fifth Location = %u",*(ptr+4));
    printf("\n Fifth Location = %u",*(ptr+2));
    printf("\n Fifth Location = %u",*(ptr+8));
    */

   for(i=0;i<n;i++)
   {
       printf("\n %d",*(ptr+i)); 
   }

    return 0;
}