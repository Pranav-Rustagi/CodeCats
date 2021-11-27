#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void revStr(char *str) {
    int length = strlen(str);
    for(int i = 0 ; i < length >> 1 ; i++)
        swap(str + i, str + length - i - 1);
}


int main() {
    char str[100];
    printf("\n\nEnter a string : ");
    scanf("%s", str);
    revStr(str);
    printf("\n\nReversed string : %s\n\n\n", str);
    return 0;
}