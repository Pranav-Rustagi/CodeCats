// SET 0,1,2 in an array :
// You are given the array consisting of 0,1,2.
// You have to modify the array by setting all the 0’s in starting and all the 1’s in middle and all the 2’s at the end.

#include <stdio.h>
#include <stdlib.h>

void main() {
    int N, *arr, iterator = 0;
    int freq[] = {0, 0, 0};
    printf("\n\nEnter no of elements : ");
    scanf("%d", &N);
    arr = (int *) malloc(N * sizeof(int));
    printf("\nEnter elements : ");
    for(int i = 0 ; i < N ; i++) {
        scanf("%d", arr + i);
        freq[arr[i]]++;
    }
    
    for(int i = 0 ; i < N ; i++) {
        if(freq[0] > 0) {
            arr[i] = 0;
            freq[0]--;
        }
        else if(freq[1] > 0) {
            arr[i] = 1;
            freq[1]--;
        }
        else {
            arr[i] = 2;
            freq[2]--;
        }
    }
    
    printf("\nOUTPUT :");
    for(int i = 0 ; i < N ; i++)
        printf(" %d", arr[i]);
    printf("\n\n\n");
}