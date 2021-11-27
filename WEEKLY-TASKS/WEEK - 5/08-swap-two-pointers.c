#include <stdio.h>

void swapPointers(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    printf("\n\nEnter two numbers : ");
    scanf("%d %d", ptr1, ptr2);

    printf("\nPointer values :\n\nBefore swapping :\nptr1 -> %d\nptr2 -> %d", *ptr1, *ptr2);
    swapPointers(&ptr1, &ptr2);
    printf("\n\nAfter swapping :\nptr1 -> %d\nptr2 -> %d\n\n\n", *ptr1, *ptr2);
    return 0;
}