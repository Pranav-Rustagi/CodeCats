#include <stdio.h>

void sumOfTwo(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int a, b, sum = 0;
    printf("\n\nEnter values : ");
    scanf("%d %d", &a, &b);
    sumOfTwo(&a, &b, &sum);
    printf("\n%d + %d = %d\n\n\n", a, b, sum);
    return 0;
}