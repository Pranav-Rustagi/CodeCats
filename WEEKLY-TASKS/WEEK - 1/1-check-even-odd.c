// Write a C program to check whether a number is even or odd.

#include <stdio.h>

short checkEvenOdd (int num) {
    return (num & 1);
}

int main() {
    int num;
    printf("\n\nEnter a number : ");
    scanf("%d", &num);

    if(checkEvenOdd(num))
        printf("\n%d is an odd number.\n\n\n", num);
    else
        printf("\n%d is an even number.\n\n\n", num);

    return 0;
}