// Write a program in C to display the number in reverse order

#include <stdio.h>

int reverse(int num);

int main() {
    int num;
    printf("\n\nEnter a number : ");
    scanf("%d", &num);
    printf("\nReverse of %d : %d\n\n\n", num, reverse(num));
    return 0;
}

int reverse(int num) {
    int res = 0;
    while(num) {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return res;
}