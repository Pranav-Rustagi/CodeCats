#include <stdio.h>
#include <string.h>

short isVowel(char ch) {
    return (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U');
}

int countVowels(char *str) {
    int count = 0;
    while(*str)
        if(isVowel(*str++))
            count++;
    return count;
}


int main() {
    char str[100];
    int vowelCount;
    printf("\n\nEnter a string : ");
    gets(str);
    vowelCount = countVowels(str);
    printf("\nCount of :\nVowels : %d\nConsonents : %d\n\n\n", vowelCount, strlen(str) - vowelCount);
    return 0;
}