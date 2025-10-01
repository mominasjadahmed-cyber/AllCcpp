//encrepted and decreptes
#include<stdio.h>
int main()
{
    FILE *p1,*p2,*p3;
    char c,key='a';
    p1=fopen("actual.txt","rb");
    p2=fopen("encrepted.txt","wb");

    if(p1==NULL || p2==NULL)
    {
        printf("\n The File IO Error!");
    }
    else{
        while(1)
        {
            c=fgetc(p1);
            if(c==EOF)
                break;
            else{
                c=c^key;
                fputc(c,p2);
            }
        }
        fclose(p1);
        fclose(p2);
    }

    p2=fopen("encrepted.txt","rb");
    p3=fopen("decrepted.txt","wb");

    if(p2==NULL || p3==NULL)
    {
        printf("\n The 2 File IO Error!");
    }
    else{
        while(1)
        {
            c=fgetc(p2);
            if(c==EOF)
                break;
            else{
                c=c^key;
                fputc(c,p3);
            }
        }
        fclose(p2);
        fclose(p3);
    }



    return 0;
}