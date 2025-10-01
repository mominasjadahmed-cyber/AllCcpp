#include<stdio.h>
#include<string.h>

int main()
{
    char names[10][20]={"saif","Asjad","Mohsin","mujeeb","Ahmed","Momin","ali","shoiab","Mudeeb","arshad"},i;
    char guess[20];
    

    printf("\n Enter your guess : ");
    scanf("%s",&guess);

    for(i=0;i<10;i++)
    {
        if (strcmp(guess,names[i])==0)
        {
    
            printf("\n Your guess is correct!");
            printf("\n At the index of %d",i);
            break;

        }
        else{
            printf("\n Your guess is incorrect!");
        }
    }



    return 0;
}