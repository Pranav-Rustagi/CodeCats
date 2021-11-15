// Search Insert Position :
// Given a sorted array of distinct integers and a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.

#include <stdio.h>
#include <stdlib.h>


int findInd(int *arr, int start, int end, int target) {
    if(start > end)
        return start;
    int mid = (start + end) / 2;
    if(arr[mid] == target)
        return mid;
    else if(arr[mid] > target)
        return findInd(arr, start, mid - 1, target);
    else
        return findInd(arr, mid + 1, end, target);
}

void main() {
    int N, target, *arr;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &N);
    arr = (int *) malloc(N * sizeof(int));
    printf("\nEnter elements : ");
    for(int i = 0 ; i < N ; i++)
        scanf("%d", arr + i);
    printf("\nEnter target value : ");
    scanf("%d", &target);
    printf("\nPosition : %d\n\n\n", findInd(arr, 0, N - 1, target));
}