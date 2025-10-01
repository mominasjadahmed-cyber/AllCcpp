#include<stdio.h>
int main()
{
    int i,j,k,a[5][5],b[5][5],c[5][5],r1,c1,r2,c2,sum;
    printf("\n Enter the order of first matrix:\n ");
    scanf("%d%d",&r1,&c1);

    printf("\n Enter the order of second matrix:\n ");
    scanf("%d%d",&r2,&c2);
  
    if(r2!=c1)
    {
        printf("\n Multilication not possible:");

    }  
    else{
        printf("\n Enter %d element in 1st is: ",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",a[i][j]);
            }
        }
        printf("\n  Enter %d element in 2st is: ",r2*c2);
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",b[i][j]);
            }
        }

        printf("\n The first matrix is: ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%5d",a[i][j]);
            }printf("\n");
        }
        printf("\n The second matrix is: ");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%5d",b[i][j]);
            }printf("\n");
        }

        for(i=0;i<c1;i++)
        {
            for(j=0;j<r2;j++)
            {
                sum=0;
                for(k=0;k<r1;k++)
                {
                    sum+=a[i][k]*b[k][j];

                }
                c[i][j]=sum;
            }
        }
        printf("\n The Multilication both matrices:\n");
    }  
    return 0;
}