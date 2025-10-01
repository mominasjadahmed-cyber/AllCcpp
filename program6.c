//nested loop
#include<stdio.h>
int main()
{
    int o,s,n;
    float r,a,l,b,h,s1;
    printf("\n1:Shape");
    printf("\n2:Number");
    printf("\n3:Character");
    printf("\n4:Distance");
    printf("\n5:Exit");
    printf("\nchoose the one option: ");
    scanf("%d",&o);

    switch(o)
    {
        
        
        case 1:
        printf("\na:area of circle: ");
        printf("\nb:rectangle of sides: ");
        printf("\nc:area of triangle: ");
        printf("\nd:square");
        printf("\nchoose that one option: ");
        scanf("%d",&s);

        switch(s)
        

        {
            case 1:
            printf("\nEnter radius of circle: ");
            scanf("%f",&r);
            a=3.1414*r*r;
            printf("\narea of circle is %.2f",a);
            break;
        }
        

        {
            case 2:
            printf("\n Enter lenght and breadth: ");
            scanf("%f%f",&l,&b);
            a=l*b;
            printf("\narea of reactangle is %.2f",a);
            break;
        }
        {
            case 3:
            printf("\nEnter hieght and base: ");
            scanf("%f%f",&l,&h);
            a=0.5*l*h;
            printf("\narea of trianglr is %.2f",a);
            break;
        }
        {
            case 4:
            printf("\n Enter sides: ");
            scanf("%f",&s1);
            a=s*s;
            printf("\narea of square is %.2f",a);
            break;        
        }
        
       
        break;
     

        case '2' :
        printf("\na:square: ");
        printf("\nb:squareroot: ");
        printf("\nc:cube: ");
        printf("\nd:cuberoot");
        printf("\nchoose that one option: ");
      
        scanf("%c",&n);
        
        switch(n)

        {
            case 1:
            printf("\nEnter the number: ");
            scanf("%d",&s);
            a=s*s;
            printf("\nSquare of %d is %d",s,a);
            break;
        }
        

        

        
    }




    return 0;
}