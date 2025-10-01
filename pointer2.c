#include<stdio.h>

void CETMarks(int *p)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(*(p+i)>=100)
            *(p+i)=1;

        else
           *(p+i)= -1;
            
    }
    printf("\n The CET marks= %d",*(p+i));
}
int main ()
{
    int a[10]={100,23,54,555,144,231,45,15,89,454};
    CETMarks(a);
  

    return 0;
}