#include<stdio.h>
int main()
{
    int cusid,i;
    char c_name[25];
    float amount;

    FILE *ptr;
    ptr =fopen("customer.txt","w");

    if(ptr==NULL)
    {
        printf("\n File Error!");
    }
    else
    {
        for(i=0;i<2;i++)
        {
            printf("\n Enter customer id: ");
            scanf("%d",&cusid);
            fflush(stdin);
            printf("\n Enter customer name: ");
            scanf("%s",&c_name);
            printf("\n Enter Amount: ");
            scanf("%f",&amount);
            fprintf(ptr,"%d  %s  %f \n",cusid,c_name,amount);
        }

        
    }
    fclose(ptr);

    return 0;
}