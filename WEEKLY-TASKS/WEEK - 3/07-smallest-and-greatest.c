// C Program to Find Largest and Smallest Element in Array

#include <stdio.h>
#include <stdlib.h>

void main() {
    int N, *arr, min, max;
    printf("\n\nEnter number of elements : ");
    scanf("%d", &N);
    arr = malloc(N * sizeof(int));
    printf("\nEnter array elements one by one : ");
    for(int i = 0 ; i < N ; i++) {
        scanf("%d", arr + i);

        if(i == 0) {
            min = arr[0];
            max = arr[0];
        }
        else {
            if(min > arr[i])
                min = arr[i];
            else if (max < arr[i])
                max = arr[i];
        }
    }
    
    printf("\nSmallest element : %d\nGreatest element : %d\n\n\n", min, max);
}