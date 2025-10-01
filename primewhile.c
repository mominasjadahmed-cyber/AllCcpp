//using while loop to print prime numbers from 1 to 100
#include<stdio.h>
int main()
{
    int n,d;
    n=1;

    while (n<=100)
    {
        if (n==1)
        {
           // printf("\n%d is not prime number",n);
        }
        else 
        {
            d=2;
            while (d<=n/2)
            {
                if (n%d==0)
                {
                    //printf("\n%d is not prime number",n);
                    //break;
                }
                d++;
            }
            if (d>n/2)
            {
                printf("\n%d is prime number",n);
            }
            
        }
        n++;

    }    
    
    return 0;
}