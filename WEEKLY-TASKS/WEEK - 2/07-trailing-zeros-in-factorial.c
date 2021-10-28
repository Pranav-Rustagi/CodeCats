// Calculate the number of zeros at the end of the decimal form of number N!

#include <stdio.h>

int countTrailingZeros(int num);

int main() {
    int num;
    printf("\n\nEnter a number : ");
    scanf("%d", &num);
    printf("\nCount of trailing zeros in the value of %d! : %d\n\n\n", num, countTrailingZeros(num));
    return 0;
}

int countTrailingZeros(int num) {
    int temp = 5, res = 0;
    while(num >= temp) {
        res += num / temp;
        temp *= 5;
    }
    return res;
}