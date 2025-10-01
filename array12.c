//Read the n numbers into an array and calculate the sum of element at all odd indices and even indices
#include <stdio.h>
int main()
{
    int n,i,odd=0,even=0;
    int a[20];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2!=0)
            odd+=a[i];
        else
            even+=a[i];
    }
    

    printf("Sum of elements at odd indices: %d\n",even);
    printf("Sum of elements at even indices: %d\n",odd);


    return 0;
}