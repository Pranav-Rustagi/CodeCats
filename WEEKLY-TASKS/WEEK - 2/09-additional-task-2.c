// Write a program in C to find the prime numbers within a range of numbers

#include <stdio.h>
#include <math.h>

short isPrime(int num);
void swap(int *a, int *b);

int main() {
    int lhl, rhl;
    printf("\n\nEnter two values for range : ");
    scanf("%d %d", &lhl, &rhl);

    if(lhl > rhl)
        swap(&lhl, &rhl);

    printf("\nPrime numbers in the range [%d, %d] : ", lhl, rhl);
    for(int i = lhl ; i <= rhl ; i++)
        if(isPrime(i))
            printf(" %d", i);
    printf("\n\n\n");

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

short isPrime(int num) {
    if(num < 2)
        return 0;
    if(num == 2 || num == 3)
        return 1;
    if(num % 6 == 1 || num % 6 == 5) {
        int lim = sqrt(num);
        for(int i = 5 ; i <= lim ; i++)
            if(num % i == 0)
                return 0;
        return 1;
    }
    return 0;
}