#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char command[1024];
    char res[1024];
    int resSize = 0;
    printf("\n\nCommand : ");
    scanf("%s", command);
    
    int cmdLen = strlen(command);
    for(int i = 0 ; i < cmdLen ; i++) {
        if(command[i] == 'G') {
            res[resSize++] = 'G';
        }
        else {
            if(command[i + 1] == ')') {
                res[resSize++] = 'o';
                i++;
            }
            else {
                res[resSize++] = 'a';
                res[resSize++] = 'l';
                i += 3;
            }
        }
    }

    res[resSize] = '\0';
    printf("\nParsed command : %s\n\n\n", res);
    return 0;
}