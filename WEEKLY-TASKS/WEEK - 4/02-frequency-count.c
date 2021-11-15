// Count Frequency of every element of the array using hashing

#include <stdio.h>
#include <stdlib.h>

void main() {
    int N, *arr, *count, countSize = 0;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &N);

    arr = malloc(N * sizeof(int));
    printf("\nEnter elements : ");
    for(int i = 0 ; i < N ; i++) {
        scanf("%d", arr + i);
        if(arr[i] > countSize)
            countSize = arr[i];
    }

    count = (int *) calloc(countSize, sizeof(int));
    for(int i = 0 ; i < N ; i++)
        count[arr[i] - 1]++;

    printf("\nFrequencies :\n");
    for(int i = 0 ; i < countSize ; i++)
        if(count[i] > 0)
            printf("\n%d - %d times", i + 1, count[i]);
    printf("\n\n\n");
}