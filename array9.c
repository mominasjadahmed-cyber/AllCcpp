#include<stdio.h>
int main()
{
    int i,n,a[10],sum=0;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        

    }
    
    
    for(i=0;i<n;i++)
    {
        if(a[i]%5==0 && a[i]%9==0)
        {
            
            printf("\n %5d is divisible by 5 and 9:  ",a[i]);
            sum+=a[i];
            printf("\n sum of divisible 5 and 9 %d",sum);
            
        }
        else{
            printf("\n %5d is not divisible by 5 or 9:  ",a[i]);
        }
       
    }
    return 0;
}