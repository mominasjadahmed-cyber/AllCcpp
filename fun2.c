#include<stdio.h>
#include<string.h>

int compare(char *p1,char *p2)
{
    if(strlen(p1)<strlen(p2))
        return 1;
    else if(strlen(p1)>strlen(p2))
        return -1;
    else
        return 0;
}

int main ()
{
    char str1[5],str2[5];
    printf("\n The two string is: ");
    scanf("%s %s",&str1,str2);

    int i;
    i=compare(str1,str2);
    printf("\n %d",i);


    
   
   
    return 0;
}
