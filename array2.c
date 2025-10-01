#include <stdio.h>
int main()
{
    int a[10]={54,32,45,78,64,42,46,47,62,79}, i;

    printf("\nInitial array values:");
    for(i=0; i<10; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }

    printf("\n\nEnter 10 new numbers:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray after entering new values:");
    for(i=0; i<10; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }

    return 0;
}
