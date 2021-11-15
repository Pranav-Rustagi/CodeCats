// TWO SUM : 
// Given an array of integer numbers and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include <stdio.h>
#include <stdlib.h>


int findEl(int *arr, int start, int end, int el) {
    if(start > end)
        return -1;

    int mid = (start + end) / 2;
    if(arr[mid] == el)
        return mid;
    else if(arr[mid] > el)
        return findEl(arr, start, mid - 1, el);
    else
        return findEl(arr, mid + 1, end, el);
}


void main() {
    int N, target, *arr, foundInd;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &N);
    printf("\nEnter target sum : ");
    scanf("%d", &target);

    arr = (int *) malloc(N * sizeof(int));
    printf("\nEnter elements : ");
    for(int i = 0 ; i < N ; i++)
        scanf("%d", arr + i);
    
    for(int i = 0 ; i < N - 1 ; i++) {
        foundInd = findEl(arr, i + 1, N - 1, target - arr[i]);
        if(foundInd != -1) {
            printf("%d, %d\n\n\n", i, foundInd);
            break;
        }
    }
}