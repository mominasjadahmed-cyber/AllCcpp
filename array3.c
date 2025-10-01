#include <stdio.h>
int main()
{
    float temp[10],total=0,average;
    int i;

    printf("\n Enter 10 days temperature of city: ");

    for (i=0;i<10;i++)
    {
        scanf("%f",&temp[i]);
        total+=temp[i];
        printf("\n temp[i]= %.2f",total);
       
    }
    average=total/10;
    printf("\n Average temperature %.2f",average);
    
    return 0;
}