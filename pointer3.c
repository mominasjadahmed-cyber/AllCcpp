#include<stdio.h>
struct customer
    {
        int cid;
        float bill_amount,paid,balance;
        char cname[50];

    } c1,*ptr,c[2];


void displayAllAmounts(struct customer *p)
{
    float total_bill_amount=0,total_paid=0,total_balance=0;
    int i;
    for(i=0;i<2;i++)
    {
        total_bill_amount+=(p+i)->bill_amount;
        total_paid+=(p+i)->paid;
        total_balance+=(p+i)->balance;
    }
    printf("\n The total bill amount = %f",total_bill_amount);
    printf("\n The total paid amount = %f",total_paid);
    printf("\n The total balance amount = %f",total_balance);
}
int main()
{


    int i;
    printf("\n %d",sizeof(c1));
    for(i=0;i<2;i++)
    {
        printf("\n Enter the details of a customer: ");
        printf("\n Enter customer id: ");
        scanf("%d",&c[i].cid);
        printf("\n Enter customer name: ");
        scanf("%s",&c[i].cname);
        printf("\n Enter Bill Amount: ");
        scanf("%f",&c[i].bill_amount);
        printf("\n Enter Paid Amount: ");
        scanf("%f",&c[i].paid);
        c[i].balance=c[i].bill_amount-c[i].paid;
    }
    ptr=&c[0];

    printf("\n All Data\n");
    for(i=0;i<2;i++)
    {
        printf("\n %p",ptr+i);  
        printf("\n %d",(ptr+i)->cid);
        printf("\n %s",(ptr+i)->cname);
        printf("\n %f",(ptr+i)->bill_amount);
        printf("\n %f",(ptr+i)->paid);
        printf("\n %f",(ptr+i)->balance);
    }    
    displayAllAmounts(&c[0]);
    


    return 0;
}