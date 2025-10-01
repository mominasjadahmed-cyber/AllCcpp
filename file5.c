//divide the file for several operations
#include<stdio.h>
int main()
{
    FILE *p1,*p2,*p3,*p4,*p5;
    char ch;
    int ac=0,as=0,n=0,s=0,v=0,space=0,l=0;
    p1= fopen("data.txt","r");
    p2=fopen("AlphaCapital.txt","w");
    p3=fopen("Number.txt","w");
    p4=fopen("Symbol.txt","w");
    p5=fopen("AlphaSmall.txt","w");
    

    if(p1==NULL || p2==NULL || p3==NULL || p4==NULL)
    {
        printf("\n The file is not access");
    }
    else
    {
        while(1)
        {
            if(ch==' ')
                space++;
            if(ch=='a' && ch=='i' && ch=='e' && ch=='o' && ch=='u')
                v++;
            if(ch=='\n')
                l++;
            ch=fgetc(p1);
            if(ch==EOF)
                break;
            else
            {
                fputchar(ch);
                if(ch>=65 && ch<=90)
                {
                    fputc(ch,p2);
                    ac++;
                }
                else if(ch>=48 && ch<=57)
                {
                    fputc(ch,p3);
                    n++;
                }
                else if(ch>=97 && ch<=122)
                {
                    fputc(ch,p5);
                    as++;

                }
                else    
                {
                    fputc(ch,p4);
                    s++;
                }
            }
            
        }
        fclose(p1);
        fclose(p2);
        fclose(p3);
        fclose(p4);
    }
    printf("\n The Capital Alphaber=%d",ac);
    printf("\n The Small Alphaber=%d",as);
    printf("\n The Number=%d",n);
    printf("\n The Symbol=%d",s);
    printf("\n The Vowel=%d",v);
    printf("\n The Line=%d",l);
    printf("\n The Space=%d",space);
    
    return 0;
}
