// Find whether an element exists in an array or not using linear search

#include <stdio.h>
#include <stdlib.h>

int findEl(int *arr, int N, int target) {
    for(int i = 0 ; i < N ; i++)
        if(arr[i] == target)
            return i;
    return -1;
}

void main() {
    int N, target, *arr;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &N);
    arr = (int *) malloc(N * sizeof(int));
    printf("\nEnter elements : ");
    for(int i = 0 ; i < N ; i++)
        scanf("%d", arr + i);
    printf("\nEnter element to be searched : ");
    scanf("%d", &target);

    short foundAt = findEl(arr, N, target);
    if(foundAt == -1)
        printf("%d is absent from the array.\n\n\n", target);
    else
        printf("%d found in the array at index %d.\n\n\n", target, foundAt);
}