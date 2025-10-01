/*
 Create a structure with names as Product having following data members
        pid, pname, price, qty, amount
    
Create another structure with name as Customer, having members
        cid, cname, city, total Bill amount, discount, amount after discount
        Array of Product

Read details of atleast 5 customers and display the data in acesnding order 
of customer names



*/
#include<stdio.h>
int main()
{
    struct product
    {
        int pid,price,qty;
        char pname[50];
    };

    struct customer
    {
        int cid,pc;
        char cname[50],city[50];
        float total_amount,discount,after_discount;
        struct product p[100];
    }c[100];
    int i,j,n;
    printf("\n Enter the number of customer: ");
    scanf("%d",&n);
    printf("\nEnter the details of %d customer: ",n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the customer id: ");
        scanf("%d",&c[i].cid);
        fflush(stdin);
        printf("\n Enter the customer name: ");
        scanf("%s",&c[i].cname);
        fflush(stdin);
        printf("\n Enter the customer city: ");
        scanf("%s",&c[i].city);
        printf("\n Enter the number of product: ");
        scanf("%d",&c[i].pc);

       
        printf("\n Enter the details 0f %d product: ",c[i].pc);
        for(j=0;j<c[i].pc;j++)
        {
            c[i].total_amount=0;
            printf("\n Enter the product id: ");
            scanf("%d",&c[i].p[j].pid);
            fflush(stdin);
            printf("\n Enter the product name: ");
            scanf("%s",&c[i].p[j].pname);
            printf("\n Enter the producy price: ");
            scanf("%d",&c[i].p[j].price);
            printf("\n Enter the product qty: ");
            scanf("%d",&c[i].p[j].qty);
          

            c[i].total_amount=c[i].p[j].price*c[i].p[j].qty;
            c[i].total_amount+=c[i].p[j].price;
            
            
        }
        if(c[i].total_amount>=25000)
            c[i].discount=0.1*c[i].total_amount;

        else if(c[i].total_amount>=10000)
            c[i].discount=0.05*c[i].total_amount;

        else if(c[i].total_amount>=5000)
            c[i].discount=0.02*c[i].total_amount;
        
        else
            c[i].discount=c[i].total_amount;

        c[i].after_discount=c[i].total_amount-c[i].discount;
    }
    printf("\n The All customer detaila: ");
    for(i=0;i<n;i++)
    {
        printf("cid=%d     cname=%s      city=%s  ",c[i].cid,c[i].cname,c[i].city);
        
        
        printf("\n Product detail: ");
        for(j=0;j<c[i].pc;j++)
        {
            printf("pid=%d      pnmae=%s       price=%d        quantity=%d ",c[i].p[j].pid,c[i].p[j].pname,c[i].p[j].price,c[i].p[j].qty);
            
            
        }
        printf("\n The total amount %.2f",c[i].total_amount);
        printf("\n The discount %.2f",c[i].discount);
        printf("\n The after discount %.2f",c[i].after_discount);

    }



    return 0;
}