// Calculate the number of zeros at the end of the decimal form of number N!

#include <stdio.h>
#include <math.h>

int countTrailingZeros(int num);

int main() {
    int num;
    printf("\n\nEnter a number : ");
    scanf("%d", &num);
    printf("\nCount of trailing zeros in the value of %d! : %d\n\n\n", num, countTrailingZeros(num));
    return 0;
}

int countTrailingZeros(int num) {
    int maxPow = 0, res = 0;
    while(num >= pow(5, maxPow))
        maxPow++;
    maxPow--;
    
    while(maxPow)
        res += num / pow(5, maxPow--);
    
    return res;
}