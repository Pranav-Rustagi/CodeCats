#include <stdio.h>

short stringComp(char *str1, char *str2) {
    if(*str1 == '\0' && *str2 == '\0')
        return 0;
    if(*str1 == '\0' || *str1 < *str2)
        return 1;
    if(*str2 == '\0' || *str1 > *str2)
        return -1;

    if(*str1 == *str2)
        return stringComp(str1 + 1, str2 + 1);
    
}

int main() {
    char str1[100], str2[100];
    printf("\n\nEnter string 1 : ");
    scanf("%s", str1);
    printf("Enter string 2 : ");
    scanf("%s", str2);

    short comparison = stringComp(str1, str2);
    switch(comparison) {
        case -1: printf("\n\n%s comes after %s in lexographical order.\n\n\n", str1, str2);
                 break;
        case  1: printf("\n\n%s comes before %s in lexographical order.\n\n\n", str1, str2);
                 break;
        case  0: printf("\n\nBoth strings are equal.\n\n\n");
                 break;
    }
    return 0;
}