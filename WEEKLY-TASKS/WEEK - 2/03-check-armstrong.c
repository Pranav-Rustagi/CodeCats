// Write a C program to check whether a given number is an armstrong number or not.

#include <stdio.h>
#include <math.h>

short isArmstrong(int num);
int countDigits(int num);

int main() {
    int num;
    printf("\n\nEnter a number : ");
    scanf("%d", &num);

    printf("\n%d is ", num);
    if(!isArmstrong(num))
        printf("not ");
    printf("an armstrong number\n\n\n");
    
    return 0;
}


short isArmstrong(int num) {
    int digitCount = countDigits(num), temp = num, res = 0;

    while(temp) {
        res += pow(temp % 10, digitCount);
        temp /= 10;
    }

    return (res == num);
}

int countDigits(int num) {
    int count = 0;

    while(num){
        num /= 10;
        count++;
    }

    return count;
}