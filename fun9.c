#include<stdio.h>
#include<string.h>

int full_nam(char first_name[10],char last_name[10])
{
    
    printf("\n The fitst name=%s",strupr(strcat(first_name,last_name)));

}
int main()
{
    char fname[10],lname[10];
    int full;
    printf("\n Enter the first name: ");
    scanf("%s",&fname);
    printf("\n Enter the last name: ");
    scanf("%s",&lname);
    full=full_nam(fname,lname);
    return 0;
}