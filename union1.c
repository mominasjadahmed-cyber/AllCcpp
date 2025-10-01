#include<stdio.h>
int main()
{
    union data
    {
        int x;
        char y;
    };
    union data d1;
    d1.x=100;
    
    printf("\n %d",sizeof(d1));
    printf("\n %d",d1.x);
    printf("\n %c",d1.y);
    return 0;
}
