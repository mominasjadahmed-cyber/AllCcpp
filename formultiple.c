#include<stdio.h>
/* 
int main()

{
    int i,j;
    for(i=1,j=10;(i<=7 && j<=200);i++,j++)
    {
        printf("\n %d  %d",i,j);
    }


{
    int i,j;
    for(i=1,j=10;(i<=7 || j<=200);i++,j+=10)
    {
        printf("\n %d  %d",i,j);
    }

    return 0;
}

int main()
{
    int i,j,k,l;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            for(k=0;k<=1;k++)
            {
                for(l=0;l<=1;l++)
                {
                    printf("\n %d  %d  %d  %d    %d \t %x \t",i,j,k,l,i*8+j*4+k*2+l*1,i*8+j*4+k*2+l*1);
                }
            }
        }
    }
    return 0;
}
*/


int main()
{
    int i,j;
    for(i=1;i<=20;i*=2)
    {
        printf("\n %d",i);
    }
    return 0;
}


