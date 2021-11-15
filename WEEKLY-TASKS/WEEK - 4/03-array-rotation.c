// Rotate the array by “k” steps in right direction

#include <stdio.h>
#include <stdlib.h>

int* rotateArray(int *arr, int arrSize, int shifts) {
    shifts %= arrSize;
    int *res = (int *) malloc(arrSize * sizeof(int));
    for(int i = 0 ; i < arrSize ; i++)
        res[(i + shifts) % arrSize] = arr[i];
    return res;
}

void main() {
    int N, k, *arr;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &N);

    arr = (int *) malloc(N * sizeof(int));
    printf("\nEnter elements : ");
    for(int i = 0 ; i < N ; i++)
        scanf("%d", arr + i);
    
    printf("\nEnter shifts (k) : ");
    scanf("%d", &k);

    int *res = rotateArray(arr, N, k);
    rotateArray(arr, N, k);
    printf("\nRotated array :");
    for(int i = 0 ; i < N ; i++)
        printf(" %d", res[i]);
    printf("\n\n\n");
}