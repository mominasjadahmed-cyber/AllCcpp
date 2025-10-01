#include<stdio.h>
int main()
{
    FILE *ptr;
    int p,c=0;
    char ch;
    ptr=fopen("data.txt","r");

    if(ptr==NULL)
        printf("\n File IO error!");
    else
    {
        /*
        printf("\n The position of the %d File",ftell(ptr));
        fseek(ptr,0,SEEK_END);
        p=ftell(ptr);
        while(p>=-1)
        {
           // printf("\n %d \t %c",ftell(ptr),ch);
            ch=fgetc(ptr);
            putchar(ch);
            fseek(ptr,-c,SEEK_END);
            c++;
            p--;

            
            
        }
        printf("\n The position of the %d File",ftell(ptr));
        fclose(ptr);
        */
        printf("\n The position %d ",ftell(ptr));
        while((ch=fgetc(ptr))!=EOF)
        {
            printf("\n  %d  \t  %c",ftell(ptr),ch);
        }
        printf("\n The position %d ",ftell(ptr));
        fclose(ptr);
    }
    return 0;
}