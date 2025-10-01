/*1: Make all diagonal elements to 1
2: Calculate sum of all upper traingle elements
3: Make all upper triangle and lower triangle elements as 0
4: Calculate sum of all lower traingle elements
5: find transpose of the matrix
*/
#include<stdio.h>
int main()
{
    int m[10][10],i,j,n,o,sum=0;
    char stop;

    printf("\n Enter the order of the matrix: ");
    scanf("%d",&n);
    printf("\n  Enter the %d element: ",n*n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    printf("\n The matrix look like:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",m[i][j]);
        }printf("\n");
    }
    while(1)
    {

        printf("\n1: Make all diagonal elements to 1");
        printf("\n2: Calculate sum of all upper traingle elements");
        printf("\n3: Make all upper triangle and lower triangle elements as 0");
        printf("\n4: Calculate sum of all lower traingle elements");
        printf("\n5: find transpose of the matrix");

        printf("\n type one option: ");
        scanf("%d",&o);

        switch(o)
        {
            case 1:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==j)
                        m[i][j]=1;
                    printf("%5d",m[i][j]);
                }printf("\n");
            }
            break;
            case 2:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i<j)
                        sum=sum+m[i][j];
                    
                    
                }
            }
            printf("\n The sum of upper traingle %d",sum);
            
            break;

            case 3:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==j)

                    printf("%5d",m[i][j]);
                        
                    

                }
            }
            break;
            case 4:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i>j)
                        sum=sum+m[i][j];
                    
                    
                }
            }
            printf("\n The sum of upper traingle %d",sum);
            break;

            case 5:
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%5d",m[j][i]);
                    
                }
                printf("\n\n");
            }
            break;

            default:
            printf("\n Invalid OPtion!");
            break;
        }
        fflush(stdin);
        printf("\n to stop Please Enter s:");
        stop=getchar();
        if(stop=='s')
        break;

    }
    

    return 0;
}