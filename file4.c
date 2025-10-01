/*File or creating backup*/
#include<stdio.h>
int main()
{
    FILE *ptr,*ptw;
    char ch;
    ptr=fopen("example1.txt","r");
    ptw=fopen("example2.txt","w");

    if(ptr==NULL || ptw==NULL)
    {
        printf("Error access file!");
    }
    else
    {
        while (1)
        {
            ch=fgetc(ptr);
            if(ch==EOF)
                break;
            else
                fputc(ch,ptw);
        }
        printf("Data copied! Backup Taken!");
        fclose(ptr);
        fclose(ptw);
        
        
    }
    
    return 0;
}