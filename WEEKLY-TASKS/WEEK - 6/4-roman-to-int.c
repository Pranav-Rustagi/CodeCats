#include <stdio.h>
#include <string.h>



int getSymbolInt(char ch) {
    switch (ch) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int main() {
    char roman[1024];
    printf("\n\nEnter roman number : ");
    scanf("%s", roman);

    int number = 0;
    int length = strlen(roman);
    for(int i = 0 ; i < length ; i++) {
        int tempNum = getSymbolInt(roman[i]);
        int nextNum = getSymbolInt(roman[i + 1]);
        
        if(i < length && (i == length - 1 || tempNum >= nextNum)) {
            number += tempNum;
        }
        else {
            number += nextNum - tempNum;
            i++;
        }
    }

    printf("\nNumerical equivalent : %d\n\n\n", number);
    return 0;
}
