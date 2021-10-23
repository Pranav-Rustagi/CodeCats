// C program to find power of a number using for loop.

#include <stdio.h>

int power(int base, int exp);

int main() {
    int base, exp;
    printf("\n\nEnter value for base : ");
    scanf("%d", &base);
    printf("Enter value for exponent : ");
    scanf("%d", &exp);
    printf("\nValue of %d^%d : %d\n\n\n", base, exp, power(base, exp));

    return 0;
}

int power(int base, int exp) {
    if(exp == 0)
        return 1;
        
    int res = 1;
    while(exp--)
        res *= base;

    return res;
}