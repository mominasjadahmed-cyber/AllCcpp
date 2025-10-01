#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],r1,c1,r2,c2,i,j;
    printf("\nEnter the first array: ");
    scanf("%d%d",&r1,&c1);

    printf("\nEnter the second array: ");
    scanf("%d%d",&r2,&c2);

    if(r1==r2 && c1==c2)
    {
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%5d",&a[i][j]);
            }
        }

        printf("\n The second array %d",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",a[i][j]);
            }
        }

        printf("\n The second array %d",r2*c2);
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",b[i][j]);
            }
        }

        printf("\n The first array ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("\n %d",a[i][j]);
            }
        }

        printf("\n The second array %d",r2*c2);
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\n %d",b[i][j]);
            }
        }
        


        printf("\n Addition:");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\n %5d ",a[i][j]+b[i][j]);
            }
            printf("\n");

        }
        
    }
    
    else{
        printf("\n The order is matrices is different: ");
        printf("\n Enter the same order:");
        
    }
    

    return 0;
}