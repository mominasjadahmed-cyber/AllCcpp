#include<stdio.h>

void greet(char *firstname,char *lastname)
{
    printf("\n The first name is %s and the last name is %s",firstname,lastname);
}
int main()
{
    greet("Momin","Asjad");
   
    return 0;
}