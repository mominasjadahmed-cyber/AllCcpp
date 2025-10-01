#include<stdio.h>
int main()
{
    int cusid;
    char c_name[25];
    float amount;

    FILE *ptr;
    ptr =fopen("customer.txt","r");

    if(ptr==NULL)
    {
        printf("\n File Error!");
    }
    else
    {
       while(fscanf(ptr,"%d  %s  %f\n",&cusid,&c_name,&amount)!=EOF);
       {
            printf("\n Enter customer id=%d",cusid);
            printf("\n Enter customer name=%s",c_name);
            printf("\n Enter Amount=%f",amount);
       }
    }
    fclose(ptr);

    return 0;
}