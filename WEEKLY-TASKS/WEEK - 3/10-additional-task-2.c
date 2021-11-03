// Find the Second Largest and second smallest element in an array.

#include <stdio.h>
#include <stdlib.h>

void main() {
    int N, *arr, max, min, secondMax = -1, secondMin = -1;
    printf("\n\nEnter number of elements : ");
    scanf("%d", &N);
    arr = malloc(N * sizeof(int));
    printf("\nEnter array elements one by one : ");
    for(int i = 0 ; i < N ; i++) {
        scanf("%d", arr + i);

        if(i == 0) {
            max = arr[i];
            min = arr[i];
        }
        else {
            if(arr[i] > max) {
                secondMax = max;
                max = arr[i];
            }
            else if(arr[i] < min) {
                secondMin = min;
                min = arr[i];
            }

            if(arr[i] < max && (secondMax == -1 || arr[i] > secondMax))
                secondMax = arr[i];
            if(arr[i] > min && (secondMin == -1 || arr[i] < secondMin))
                secondMin = arr[i];
        }
    }

    printf("\n\nSecond largest element : %d\nSecond smallest element : %d\n\n\n", secondMax, secondMin);
}