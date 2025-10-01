#include<stdio.h>
#include<string.h> 
int main()
{
    int x=215;
    float f=234.7354786;
    char A='M';
    char username[35];
    strcpy(username,"mominasjad");
    
    
    printf("\n%d",x);

    printf("\n%f",f);
    printf("%10.2f",f);
    printf("%-10.5f",f);

    printf("\n%-2c",A);
    printf("%-20s",username);
    printf("%-20s",username); 
    printf("%-20s",username);

    printf("%o",x);



    return 0;
}