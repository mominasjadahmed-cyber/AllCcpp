#include<stdio.h>
int main()
{
    struct Book
    {
        int bookid;
        char bookname[100],author[100];
        float price,amount,qty;
       
    } b1;
   

    printf("\n Enter the books details: ");
    printf("\n Bookid,Bookname,Author,price,qty: ");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    
    scanf("%s",&b1.bookname);
    scanf("%s",&b1.author);
    scanf("%.2f",&b1.price);
    scanf("%f",&b1.qty);

    printf("\n %50s %20s %20s",b1.bookid,b1.bookname,b1.author);
    printf("\n The amount is:%f ",b1.price*b1.qty);
    
    

    return 0;
}