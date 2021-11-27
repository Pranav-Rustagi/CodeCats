#include <stdio.h>

int strlength(char *str) {
    int length = 0;
    while(*str++)
        length++;
    return length;
}

int main() {
    char str[100];
    printf("\nEnter a string : ");
    scanf("%s", str);
    int length = strlength(str);
    printf("\nLength of string : %d\n\n\n", length);
    return 0;
}