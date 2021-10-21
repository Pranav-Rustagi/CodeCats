// Write a C program to find the maximum between two numbers.

#include <stdio.h>

short checkMaxForTwo(int num1, int num2) {
    if(num1 > num2)
        return 1;
    if(num2 > num1)
        return 2;
    return 0;
}

int main() {
    int num1, num2;
    printf("\n\nEnter two numbers : ");
    scanf("%d %d", &num1, &num2);

    short maxStatus = checkMaxForTwo(num1, num2);

    switch (maxStatus) {
        case 0: printf("\nBoth numbers are equal.\n\n\n");
                break;
        case 1: printf("\n%d is greater than %d.\n\n\n", num1, num2);
                break;
        case 2: printf("\n%d is lesser than %d.\n\n\n", num1, num2);
                break;
    }

    return 0;
}