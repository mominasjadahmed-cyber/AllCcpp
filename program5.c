
#include<stdio.h>
int main()
{
    int qty;
    float price,amount,discount,final_amount;
    printf("\nEnter price and Quantity of a keyboard: ");
    scanf("%f%d",&price,&qty);

    amount=price*qty;
    discount=(amount>=5000)?amount*0.1:amount*0.05;
    final_amount=amount-discount;
    printf("\nThe Billing Statement\n");
    printf("\n%10.2f %10d %10.2f %10.2f %10.2f",price,qty,amount,discount,final_amount);

    return 0;
}
