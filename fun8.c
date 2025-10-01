#include<stdio.h>
float n_salary(int b_salary)
{
    int ta,hra,pf,gross_salary,net_salary,tax;
    printf("\n enter the basic salary: ");
    scanf("%d",&b_salary);

    ta = b_salary*0.04;
    printf("\n The ta is: %d",ta);

    hra=b_salary*0.02;
    printf("\n The hra is: %d",hra);

    pf=b_salary*0.012;
    printf("\n The pf is: %d",pf);

    gross_salary=b_salary+hra+ta+pf;
    printf("\n The total basic salary is: %d",gross_salary);

    net_salary=gross_salary*12;
    printf("\n The net salary is: %d",net_salary);

    if(gross_salary==600000)
    {
        tax=0.04*gross_salary;
            printf("\n The tax is %d",tax);

    }



    

}
int main()
{
    int n,b_salary;
    char name[10],id[10];
    printf("\n Enter your name : ");
    scanf("%s",&name);
    printf("\n Enter your ID : ");
    scanf("%s",&id);
    n=n_salary(b_salary);
    


    return 0;
}