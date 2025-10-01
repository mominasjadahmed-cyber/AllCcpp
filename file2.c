//file write mode
#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("example2.txt","w");

    if(ptr==NULL)
    {
        printf("\n The file is not contain!");
    }
    else
    {
        printf("\n enter the data of the file: ");
        while(1)
        {
            ch=getchar();
            if(ch==EOF)
                break;
            else{
                fputc(ch,ptr);
            }
        }
        fclose(ptr);
    }

    return 0;
}