#include<stdio.h>
#include<string.h>
struct consumer 
{
    int cid,units;
    char con_name[50];
    float amount;
} c[10];

void TotalBill(struct consumer *ptr,int n)
{
    int i,total=0;
    for(i=0;i<n;i++)
    {
        printf("\n %d \t %d \t %.2f",(ptr+i)->cid,(ptr+i)->units,(ptr+i)->amount);
        total+=(ptr+i)->amount;
    }
    printf("\n The total amount %d = %d",n,total);

}

void SortBillAmount(struct consumer *ptr,int n)
{
    struct consumer temp;
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((ptr+i)->amount>(ptr+j)->amount)
            {
                temp = *(ptr+i);
                *(ptr+i) =* (ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d \t %d \t %.2f",(ptr+i)->cid,(ptr+i)->units,(ptr+i)->amount);
    }

}

void BillAmount(struct consumer *ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if((ptr+i)->amount>2000)
        {
            printf("\n The 2000 More Amount is %.2f",(ptr+i)->amount);
        }
        else{
            printf("\n The 2000 Less Amount is %.2f \t %d \t %d",(ptr+i)->amount,(ptr+i)->cid,(ptr+i)->units);

        }
    }
}

void Alpha(struct consumer *ptr, int n) {
    struct consumer temp;
    int i, j;

   
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp((ptr + i)->con_name, (ptr + j)->con_name) > 0) {
                
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }


    printf("\nConsumers in Alphabetical Order:\n");
    for (i = 0; i < n; i++) {
        printf("\n %s", (ptr + i)->con_name);
    }
}

int main()
{
    int i,n;
    printf("\n Enter the number of consumers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter the consumer id: ");
        scanf("%d",&c[i].cid);
        printf("\n Enter the consumer name: ");
        scanf("%s",&c[i].con_name);
        printf("\n Enter units: ");
        scanf("%d",&c[i].units);
        
        c[i].amount=150;

        if(c[i].amount<=200)
        {
            c[i].amount+=c[i].units*2;
        }
        else if (c[i].amount<=400)
        {
            c[i].amount+=400+(c[i].units-200)*4;
        }
        else if (c[i].amount<=600)
        {
            c[i].amount+=400+800+(c[i].units-400)*6;
        }
        else
        {
            c[i].amount+=400+800+1200+(c[i].units-800)*10;
                    
        }
        printf("\nThe amount is = %.2f",c[i].amount);
    }
    //TotalBill(&c[0],n);
    //SortBillAmount(&c[0],n);
    //BillAmount(&c[0],n);
    Alpha(&c[0],n);
    return 0;
}