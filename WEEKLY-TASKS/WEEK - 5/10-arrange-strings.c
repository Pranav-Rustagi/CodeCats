#include <stdio.h>
#include <stdlib.h>


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


void swapStr(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}


void arrangeInLexo(char **arr, int n) {
    for(int i = 0 ; i < n - 1 ; i++)
        for(int j = i + 1 ; j < n ; j++)
            if(stringComp(arr + i, arr + j) == -1)
                swapStr((arr + i), (arr + j));
}


int main() {
    char **str;
    int strCount;
    printf("\n\nEnter no of inputs : ");
    scanf("%d", &strCount);
    str = (char **) malloc(strCount * sizeof(char *)) ;
    for(int i = 0 ; i < strCount ; i++) {
        str[i] = (char *) malloc(100 * sizeof(char));
        printf("%2d. ", i + 1);
        scanf("%s", str + i);
    }

    arrangeInLexo(str, strCount);

    printf("Strings in lexographical order :\n\n");
    for(int i = 0 ; i < strCount ; i++)
        printf("%s\n", str + i);
    return 0;
}