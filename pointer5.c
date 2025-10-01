#include<stdio.h>
#include<string.h>
struct employee
{
    char ename[50],gender[10];
    float salary;
    char skills[2][20];

}e[5];
void Emp(struct employee *ptr, int n) {
    int i;
    printf("\n Display All Male Employee:\n");
    for(i=0; i<n; i++) {
        if(strcmp(ptr[i].gender, "Male") == 0 && e[i].salary > 10) {
            printf("\n Employee Details: %s \t %s \t %.2f \t %s \t %s",e[i].ename,e[i].gender,e[i].salary,e[i].skills[0],e[i].skills[1]);
        }
    }
}


int main()
{
    int n,i;
    
    printf("\n Enter the numbers of employee");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the numbers %d of employee",i+1);
        printf("\n Enter the employee name: ");
        scanf("%s", e[i].ename);
        printf("\n Enter the employee gender: ");
        scanf("%s",e[i].gender);
        printf("\n Enter the employee salary in LPA: ");
        scanf("%f",&e[i].salary);
        printf("\n Enter the employee skills: ");
        scanf("%s %s",e[i].skills[0],e[i].skills[1]);
    }
    Emp(e,n);

    return 0;
}
