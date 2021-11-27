#include <stdio.h>
#include <stdlib.h>

float findAvg(int *arr, int n) {
    float sum;
    for(int i = 0 ; i < n ; i++)
        sum += *(arr + i);
    return sum / n;
}

int main() {
    int size, *arr;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &size);
    arr = (int *) malloc(size * sizeof(int));
    printf("\nEnter array elements : ");
    for(int i = 0 ; i < size ; i++)
        scanf("%d", arr + i);
    printf("\nAverage of array elements : %.2f\n\n\n", findAvg(arr, size));
    return 0;
}