#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


void swapRow(char arr[][100], int ind1, int ind2) {
    int length1 = strlen(arr[ind1]), length2 = strlen(arr[ind2]);
    int limit = length1 > length2 ? length1 : length2;
    for(int i = 0 ; i < limit ; i++) {
        char temp = arr[ind1][i];
        arr[ind1][i] = arr[ind2][i];
        arr[ind2][i] = temp;
    }
    arr[ind1][length2] = '\0';
    arr[ind2][length1] = '\0';
}



void arrangeInLexo(char arr[][100], int n) {
    for(int i = 0 ; i < n - 1 ; i++)
        for(int j = i + 1 ; j < n ; j++)
            if(stringComp(arr[i], arr[j]) == -1)
                swapRow(arr, i, j);
}


int main() {
    int strCount;
    printf("\n\nEnter no of inputs : ");
    scanf("%d", &strCount);
    
    char str[strCount][100];
    printf("\nEnter strings one by one :\n\n");
    for(int i = 0 ; i < strCount ; i++) {
        printf("%2d. ", i + 1);
        scanf("%s", *(str + i));
    }

    arrangeInLexo(str, strCount);

    printf("\n------------------------------------------\n\nStrings in lexographical order :\n\n");
    for(int i = 0 ; i < strCount ; i++)
        printf("%2d. %s\n", i + 1, str + i);
    printf("\n\n\n");
    return 0;
}