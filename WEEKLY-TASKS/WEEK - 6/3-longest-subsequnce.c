#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1024];
    int k;
    printf("\n\nstr = ");
    scanf("%s", str);
    printf("k = ");
    scanf("\n%d", &k);

    int *letters = (int *) calloc(26, sizeof(int));

    int length = strlen(str);
    for(int i = 0 ; i < length ; i++) {
        int ind = (int)(str[i]) - 97;
        letters[ind]++;
    }

    printf("\nLongest Subsequence : ");

    for(int i = 0 ; i < strlen(str) ; i++) {
        int ind = (int)str[i] - 97;
        if(letters[ind] >= k) {
            printf("%c", str[i]);
        }
    }

    printf("\n\n");

    free(letters);
    return 0;
}