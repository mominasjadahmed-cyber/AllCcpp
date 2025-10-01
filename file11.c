#include<stdio.h>
struct product 
{
    int pid,qty;
    char pname[25];
    float price,amount;
};

void readData(char *fname)
{
    struct product pr[5];
    FILE *ptr;
    int i;
    ptr=fopen(fname,"rb");

    if(ptr==NULL)
        printf("\n Enable IO Error");
    else{
        i=0;
        while(fread(&pr[i],sizeof(struct product),1,ptr))
        {
            printf("\n %5d %20s %10.2f %10d %10.2f",pr[i].pid,pr[i].pname,pr[i].price,pr[i].qty,pr[i].amount);
            i++;
        }
    }
    fclose(ptr);
}
int main()
{
    struct product p[5]; 
    readData("allproduct.txt");
    

    return 0;
}