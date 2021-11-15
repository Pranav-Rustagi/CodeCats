// Find whether an element exists in an array or not using array hashing

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {
    int N, resSize = 0, target, *arr;
    bool *freq;
    printf("\n\nEnter no of elements : ");
    scanf("%d", &N);
    arr = (int *) malloc(N * sizeof(int));
    printf("\nEnter elements : ");
    for(int i = 0 ; i < N ; i++) {
        scanf("%d", arr + i);
        if(resSize < arr[i])
            resSize = arr[i];
    }
    printf("\nEnter element to be searched : ");
    scanf("%d", &target);

    freq = (bool *) malloc(resSize * sizeof(bool));
    for(int i = 0 ; i < N ; i++)
        freq[arr[i] - 1] = true;
    
    if(freq[target - 1] == true)
        printf("\n%d is present in the array.\n\n\n", target);
    else
        printf("\n%d is absent in the array.\n\n\n", target);
}