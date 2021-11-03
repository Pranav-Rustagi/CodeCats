// Write a program in C to find the sum of
// 1. All elements of the array
// 2. Even and Odd numbers present in array
// 3. Odd and Even Position Elements of an array.

#include <stdio.h>
#include<stdlib.h>

void main() {
    int N, *arr, sumAll = 0, sumEven = 0, sumEvenPos = 0;
    printf("\n\nEnter number of elements : ");
    scanf("%d", &N);
    arr = malloc(N * sizeof(int));
    printf("\nEnter array elements : ");
    for(int i = 0 ; i < N ; i++) {
        scanf("%d", arr + i);
        sumAll += arr[i];

        if((arr[i] & 1) == 0)
            sumEven += arr[i];
        if((i & 1) == 0)
            sumEvenPos += arr[i];
    }

    printf("\n\nSum of all elements : %d\nSum of even elements : %d\nSum of odd elements : %d\nSum of even position elements : %d\nSum of odd position elements : %d\n\n\n", sumAll, sumEven, sumAll - sumEven, sumEvenPos, sumAll - sumEvenPos);
}
