// Count Total Number of occurrences of a given element in an array. 

#include <stdio.h>
#include <stdlib.h>

void main() {
    int N, *arr, el, counter = 0;
    printf("\n\nEnter number of elements : ");
    scanf("%d", &N);
    arr = malloc(N * sizeof(int));
    printf("\nEnter array elements one by one : ");
    for(int i = 0 ; i < N ; i++)
        scanf("%d", arr + i);
    printf("\nEnter element value : ");
    scanf("%d", &el);

    for(int i = 0 ; i < N ; i++)
        if(arr[i] == el)
            counter++;
    
    printf("\n\nTotal occurrences of %d : %d\n\n\n", el, counter);
}