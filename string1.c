#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20],str2[20];
    int o,e;

    printf("\n The First string is : ");
    scanf("%s",&str1);

    printf("\n The Second string is : ");
    scanf("%s",&str2);

    while(1)
    {
        printf("\n 1: String length ");
        printf("\n 2: String copy");
        printf("\n 3: String concatenate ");
        printf("\n 4: String compare ");
        printf("\n 5: String Lower Case");
        printf("\n 6: String Upper Case");
        printf("\n 7: String Reverses ");

        printf("\n Choose the option: ");
        scanf("%d",&o);

        switch(o)
        {
            case 1:
                printf("\n The first string lenght = %d",strlen(str1));
                printf("\n The second string lenght = %d",strlen(str2));

            break;

            case 2:
                printf("\n The copy string is: %s",strcpy(str2,str1));


            break;

            case 3:
                printf("\n The concatenate string is: %s",strcat(str2,str1));


            break;

            case 4:
                printf("\n The compare First string is: %s",strcmp(str2,str1));
                printf("\n The compare First string is: %s",strcmp(str2,str1));


            break;

            case 5:
                printf("\n The  upper case string is: %s",strupr(str1));
                printf("\n The upper case string is: %s",strupr(str2));

            break;

            case 6:
                printf("\n The  lower case string is: %s",strlwr(str1));
                printf("\n The  lower case string is: %s",strlwr(str2));
            break;

            case 7:
                printf("\n The  reverse string is: %s",strrev(str1));
            break;

            default:
                printf("\n Eneter the 1 to 7 option: ");
            break;
        }
        printf("Enter the -1 to exit:");
        scanf("%d",&e);
        if(e==-1)
        break;


    }
    
    

    
    return 0;
}