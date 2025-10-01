#include<stdio.h>
struct product 
{
    int pid,qty;
    char pname[25];
    float price,amount;
};

void writeData(char *fname,struct product pw[])
{
    FILE *ptr;
    int i;
    ptr=fopen(fname,"wb");

    if(ptr==NULL)
        printf("\n Enable IO Error");
    else{
        for(i=0;i<5;i++)
        {
            fwrite(&pw[i],sizeof(struct product),1,ptr);
        }

    }
    fclose(ptr);
}
int main()
{
    struct product p[5];
    int i;
    printf("\n enter the details product:");
    for(i=0;i<5;i++)
    {
        
        printf("\n Enter the product id: ");
        scanf("%d",&p[i].pid);

        fflush(stdin);
        printf("\n Enter the product name: ");
        scanf("%s",&p[i].pname);

        printf("\n Enter the product price: ");
        scanf("%f",&p[i].price);

        printf("\n Enter the product qty: ");
        scanf("%d",&p[i].qty);

        p[i].amount=p[i].price*p[i].qty;
    }
    writeData("allproduct.txt",p);

    return 0;
}