#include <stdio.h>
#include<string.h>
int main()
{
    char friuts[50][20],temp[20],f[20];
    int i=0,j,n;

    while(1)
    {
        fflush(stdin);
        printf("\n Enter the fruits names: ");
        scanf("%s",&f);
        strlwr(f);
        printf("\n %s",f);

        if (strcmp(f,"stop")==0)
        
           break;
        
        else
        {
            strcpy(friuts[i],f);
            i++;
        }
        

        
    }
    n=i;
    printf("\n The actual list is: ");
    for(i=0;i<n;i++)
    {
        printf("\n %s",friuts[i]);
    }

    printf("\n The sorted string is: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(friuts[i],friuts[j])>0)
            {
                strcpy(temp,friuts[i]);
                strcpy(friuts[i],friuts[j]);
                strcpy(friuts[j],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n %s",friuts[i]);
    }
    
    return 0;
}