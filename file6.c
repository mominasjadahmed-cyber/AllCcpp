//encrepted
#include<stdio.h>
int main()
{
    FILE *p1,*p2;
    char c;
    int n=0;
    p1=fopen("Example1.txt","r");
    p2=fopen("Example3.txt","w");
    if(p1==NULL || p2==NULL)
    {
        printf("Unable to access the files");
    }
    else
    {
        while(1)
        {
            c=fgetc(p1);
            if(c==EOF)
                break;
            else if(c>=48 && c<=57)
                {
                    fputc(c,p2);
                    n++;
                }
            else
            {
                if(c>=65 && c<=90)
                    c-=2;
                
                    
                else if(c>=97 && c<=122)
                {
                    if(c=='a')
                        c='#';
                    else if(c=='e')
                        c='@';
                    else if(c=='o')
                        c='*';
                    else if(c=='i')
                        c='$';
                    else if(c=='u')
                        c='^';
                    
                    else
                        c-=2;
                        
                }
                
                fputc(c,p2);
                
            }
        }
        fclose(p1);
        fclose(p2);
    }
    return 0;
}