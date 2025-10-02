#include<stdio.h>
#include<stdlib.h>

int main() {
    int n,i,*ptr;
    printf("\n Enter number of elements to allocate: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("\n Meomery is allocated =%u", ptr);
    for(i=0; i<n; i++) {
        *(ptr + i) = i * 100;
    }
    printf("\n Fifth Location = %u", *(ptr + 0));
    printf("\n Second Location = %u", *(ptr + 1));

    free (ptr);
    printf("\nMeomery is deallocated");

    for(i=0; i<n; i++) {
        printf("\n %d", *(ptr + i));
    }


    return 0;
}