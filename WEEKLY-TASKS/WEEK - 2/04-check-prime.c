// Write a C program to determine whether a given number is prime or not.

#include <stdio.h>
#include <math.h>

short isPrime(int num);

int main() {
    int num;
    printf("\n\nEnter a number : ");
    scanf("%d", &num);

    printf("\n%d is ", num);
    if(!isPrime(num))
        printf("not ");
    printf("a prime number\n\n");

    return 0;
}

short isPrime(int num) {
    if(num <= 1)
        return 0;

    if(num < 4)
        return 1;

    if(num % 6 == 1 || num % 6 == 5) {
        int lim = sqrt(num);
        for(int i = 5 ; i <= lim ; i+=2)
            if(num % i == 0)
                return 0;
        return 1;
    }

    return 0;
}