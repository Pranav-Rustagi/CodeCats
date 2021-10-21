// Write a C program to find the maximum between three numbers.

#include <stdio.h>

short maxBetweenThree(int num1, int num2, int num3) {
    if(num1 > num2 && num1 > num3)
        return 1;
    if(num2 > num1 && num2 > num3)
        return 2;
    return 3;
}

int main() {
    int num1, num2, num3;
    printf("\n\nEnter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    short maxStatus = maxBetweenThree(num1, num2, num3);

    switch(maxStatus) {
        case 1: printf("\n%d is the greatest of all.\n\n\n", num1);
                break;
        case 2: printf("\n%d is the greatest of all.\n\n\n", num2);
                break;
        case 3: printf("\n%d is the greatest of all.\n\n\n", num3);
                break;
    }

    return 0;
}