#include <stdio.h>


float average(int a[])
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    return sum/5.0;

}
int main()
{
    int x[5]={2,4,6,8,8};
    float avg;
    avg=average(x);
    printf("\n %.2f",avg);
   

    return 0;
}