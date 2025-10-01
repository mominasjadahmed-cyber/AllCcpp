#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int roll,marks[6],total;
        char name[100],grade[10];
        float percent;
    } s1,s2;
    int i;
  
    printf("Enter student details:");
    printf("Enter the roll number: ");
    scanf("%d",&s1.roll);
    fflush(stdin);
    printf("Enter the name: ");
    scanf("%s",&s1.name);
    printf("Enter the 6 subjects of marks: ");
    s1.total=0;
    for(i=0;i<6;i++)
    {
        
        scanf("%d",&s1.marks[i]);
        s1.total+=s1.marks[i];
    }
    s1.percent=s1.total/6.0;
    if(s1.percent<75)
        strcpy(s1.grade,"Grade A");
    else if(s1.percent<60)
        strcpy(s1.grade,"Grade B");
    else if(s1.percent<50)
        strcpy(s1.grade,"Grade c");
    else
        strcpy(s1.grade,"Grade D");
    
    printf("\n %d  %d  %d %s  %s  %f",s1.roll,s1.marks[i],s1.total,s1.grade,s1.name,s1.percent);


    printf("Enter student subject2 details:");
    printf("Enter the roll number: ");
    scanf("%d",&s2.roll);
    fflush(stdin);
    printf("Enter the name: ");
    scanf("%s",&s2.name);
    printf("Enter the 6 subjects of marks: ");
    s2.total=0;
    for(i=0;i<6;i++)
    {
        
        scanf("%d",&s2.marks[i]);
        s2.total+=s2.marks[i];
    }
    s2.percent=s2.total/6.0;
    if(s2.percent<75)
        strcpy(s2.grade,"Grade A");
    else if(s2.percent<60)
        strcpy(s2.grade,"Grade B");
    else if(s2.percent<50)
        strcpy(s2.grade,"Grade c");
    else
        strcpy(s2.grade,"Grade D");
    
    printf("\n %d  %d  %d %s  %s  %f",s2.roll,s2.marks[i],s2.total,s2.grade,s2.name,s2.percent);
    

    


    
    return 0;
}