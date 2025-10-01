#include<stdio.h>
int maximum(int num[])
{
    int max=num[0],i;
    for(i=0;i<3;i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    return max;
}
   
int main()
{
    int num[3],i;
    printf("\n Enter 3 numbers: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    int m=maximum(num);
    printf("\n Highest number is %d",m);
    return 0;
}