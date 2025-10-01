//
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int r,guess,count=1,score=100;
    srand(time(NULL));
    r=rand()%100;
    printf("\n%d",r);

    while(count<=5)
    {
        printf("\n Guess a number between 1 and 100: ");
        scanf("%d",&guess);
        if (guess<r)
        {
            printf("\nSorry, you are too low,guess larger number, Guess again");
            score-=10;
        }
        else if (guess>r)
        {
            printf("\nSorry, you are too high,guess smaller number, Guess again");
            score-=20;
        }
        else 
        {
            printf("\nCongratulations, you guessed the correct number");
            printf("\nYour score is: %d",score);
            break;
        }

        count++;
        
        if (count>5)
        {
            printf("\nSorry, you loss the game,please retry");
            
        }
    }
    return 0;
}
 