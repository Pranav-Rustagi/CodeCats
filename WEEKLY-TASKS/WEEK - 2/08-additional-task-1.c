// Write a program in C to display n terms of natural number and sum of odd numbers and also even numbers.

#include <stdio.h>

short isEven(int num);

int main() {
    int N, halfOfN, sumEven = 0, sumOdd = 0;
    printf("\n\nEnter no of terms : ");
    scanf("%d", &N);
    halfOfN = (N >> 1);

    printf("\nNatural nmubers :");
    for(int i = 1 ; i <= N ; i++) {
        printf(" %d", i);
    }

    if(isEven(N)) {
        sumOdd = halfOfN * halfOfN;
        sumEven = halfOfN * (1 + halfOfN);
    }
    else {
        sumOdd = (1 + halfOfN) * (1 + halfOfN);
        sumEven = halfOfN * (1 + halfOfN);
    }
    

    printf("\n\nSum of even numbers : %d\nSum of odd numbers : %d\n\n\n", sumEven, sumOdd);
    return 0;
}

short isEven(int num) {
    return !(num & 1);
}