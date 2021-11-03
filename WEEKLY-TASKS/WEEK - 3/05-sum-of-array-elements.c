//  Write a program in C to find the sum of all elements of the array.

#include <stdio.h>
#include <stdlib.h>

void main() {
    int N, *arr, sum = 0;
    printf("\n\nEnter number of elements : ");
    scanf("%d", &N);
    printf("\n\nEnter elements one by one : ");
    arr = malloc(N * sizeof(int));
    for(int i = 0 ; i < N ; i++)
        scanf("%d", arr + i);

    for(int i = 0 ; i < N ; i++)
        sum += *(arr + i);

    printf("\nSum of array elements : %d\n\n\n", sum);
}