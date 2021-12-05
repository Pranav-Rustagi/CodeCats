#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[1000], str2[1001];
    printf("\n\nEnter first string : ");
    scanf("%s", str1);
    printf("Enter second string : ");
    scanf("%s", str2);

    int n = strlen(str1);
    int *letters = (int *) calloc(26, sizeof(int));
    for(int i = 0 ; i < n + 1 ; i++) {
        int ind = (int)str2[i] - 97;
        letters[ind]++;
    }

    for(int i = 0 ; i < n ; i++) {
        int ind = (int)str1[i] - 97;
        letters[ind]--;
    }

    for(int i = 0 ; i < 26 ; i++) {
        if(letters[i] > 0) {
            printf("\nExtra character : '%c'\n\n\n", (i + 97));
        }
    }
    free(letters);
    return 0;
}