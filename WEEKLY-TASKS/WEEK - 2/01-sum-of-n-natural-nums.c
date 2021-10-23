// Write a program in C to display n terms of natural number and their sum.

#include <stdio.h>

int sum(int N);

int main() {
    int N;
    printf("\n\nEnter value for N : ");
    scanf("%d", &N);

    printf("\nThe first %d natural numbers are :", N);
    for(int i = 1 ; i <= N ; i++)
        printf(" %d", i);
    
    printf("\nSum of first %d natural numbers : %d\n\n\n", N, sum(N));
    return 0;
}

int sum(int N) {
    return (N * (N + 1) / 2);
}