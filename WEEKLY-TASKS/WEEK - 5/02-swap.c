#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int a, b;
    printf("\n\nEnter two numbers :\n");
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\n\nAfter swapping :\na : %d\nb : %d\n\n\n", a, b);
    return 0;
}