//creting the file
#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("example1.txt","r");
    if(ptr==NULL)
    {
        printf("\n File does not found!");
    }
    else
    {
        while(1)
        {
            ch=fgetc(ptr);
            if(ch==EOF)
                break;
            else
            {
                putchar(ch);
              
            }
                
        }
        fclose(ptr);
    }

    return 0;
}