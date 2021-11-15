// Reverse the input Array

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

void main() {
    int N, *arr;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &N);

    arr = (int *) malloc(N * sizeof(int));
    printf("\nEnter elements : ");
    for(int i = 0 ; i < N ; i++)
        scanf("%d", arr + i);
    
    int lim = N >> 1;
    for(int i = 0 ; i <= lim ; i++)
        swap(arr + i, arr + N - 1 - i);

    printf("\nReversed array : ");
    for(int i = 0 ; i < N ; i++)
        printf(" %d", arr[i]);
    printf("\n\n\n");
}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}