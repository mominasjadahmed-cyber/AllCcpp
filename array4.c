#include <stdio.h>
int main()
{
   char subj[6]={'A', 'B', 'C', 'D', 'E', 'F'},marks;
   int i,total,percentage;
   printf("\n Enter marks for each subject: ");
   for (i=0; i<6; i++)
   {
    scanf("%d",&marks);
    printf("\n Subject %c: %d", subj[i], marks);
    total+=subj[i];

    if (marks<35)
    {
        printf("\n Failed in subject %c", subj[i]);
    }
    else 
    {
        printf("\n Passed in subject %c", subj[i]);
    }
      
   }

   printf("\n Total marks: %d", total);
   percentage=(total/6)*100;
   printf("\n percentage: %d", percentage);


    return 0;
}