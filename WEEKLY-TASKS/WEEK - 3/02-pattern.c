// Create star triangle pattern in C by using nested for loop
// Pattern :
// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

void main() {
    int rowCount;
    printf("\n\nEnter no. of rows : ");
    scanf("%d", &rowCount);

    for(int i = 0 ; i < rowCount ; i++) {
        printf("\n");
        for(int j = rowCount ; j > i ; j--)
            printf("* ");
    }
    printf("\n\n\n");
}