#include<stdio.h>
float maxtemp(float t[])
{
    float max=t[0];     
    int i;
    for(i=0;i<10;i++)
    {
        if(max<t[i])  
        {      
            max=t[i];
        }       
    }                       
    return max;                         
}
int main()
{
    float temp[10]={12.21,13.12,14.12,15.12,16.12,17.12,18.12,19.12,20.12,21.12};
    int i,num[10],t;

    printf("\n Maximum=%.2f: ",maxtemp(temp));
    t=maxtemp(temp);
    printf("\n The maximum temperature is:%.2f ",t);

   
    return 0;
}