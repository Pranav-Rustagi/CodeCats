#include <stdio.h>
#include <stdlib.h>

int findLargest(int *arr, int n) {
    int largest = *arr;
    for(int i = 1 ; i < n ; i++)
        if(largest < *(arr + i))
            largest = *(arr + i);
    return largest;
}

int main() {
    int size, *arr;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &size);
    arr = (int *) malloc(size * sizeof(int));
    printf("\nEnter no one by one : ");
    for(int i = 0 ; i < size ; i++)
        scanf("%d", arr + i);

    int largestNo = findLargest(arr, size);
    printf("\nLargest no in array : %d\n\n\n", largestNo);
    return 0;
}