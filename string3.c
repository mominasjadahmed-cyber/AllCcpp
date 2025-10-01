#include<stdio.h>
#include<string.h>
int main()

{
    char username[5][20]={"abc@gmail.com","efg@gmail.com","hij@gmail.com","klm@gmail.com","xyz@gmil.com"};
    char password[5][20]={"abc123","efg123","hij123","klm123","xyz123"};

    char user[20],pass[20];
    int i,p,flag=0;

    printf("\nEnter the username: ");
    scanf("%s",&user);

    for(i=0;i<5;i++)
    {
        if(strcmp(user,username[i])==0)
        {
            printf("\n Your username is correct!");
            p=i;
            flag=1;
            break;
        }
    } 
    if (flag==1)
    {
        fflush(stdin);
        printf("\n Enter the password= ");
        scanf("%s",&pass);

        if(strcmp(pass,password[i])==0)
        {
        printf("\n Your password is correct!");
        printf("\n You login succesfully");
        }
        else{
            printf("\n Invalid password!");
        }
 
    }
    else{
        printf("\n Invalid username!");
    }
    


    return 0;
}