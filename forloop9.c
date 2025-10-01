#include<stdio.h>
/*
int main()
{
    int i,j,k=1;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%-5d",k); 
            k++;
        }
        printf("\n");
    }
    return 0;
}
*/
int main()
{
    int i,j;
    char c;
    c='A';
    
    for(i=1;j<=5; i++)
    {
        for(j=1; j<=i;j++)
        {
            printf("%d",c);
            
            break;
        }
        
        
        printf("\n");
    }
    return 0;
}