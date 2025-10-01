#include<stdio.h>
/*Append data to the file*/
int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("example1.txt","a");
    if(ptr==NULL)
        printf("Unable to access the file");
    else
    {
        printf("\n Enter data to append into the file:");
        while(1)
        {
            ch=getchar();
            if(ch==EOF)
                break;
            else
                fputc(ch,ptr);
        }
        fclose(ptr);
        printf("\n Data appended to the file!");
    }
    return 0;
}