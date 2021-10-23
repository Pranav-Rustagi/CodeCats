//  Write a C program to calculate the factorial of a given number. 

#include <stdio.h>

int factorial(int num);

int main() {
    int num;
    printf("\n\nEnter a value : ");
    scanf("%d", &num);

    printf("\nValue of %d! = %d\n\n\n", num, factorial(num));
    return 0;
}

int factorial(int num) {
    int res = 1;
    if(num < 2)
        return res;
        
    for(int i = 2 ; i<= num ; i++)
        res *= i;
        
    return res;
}