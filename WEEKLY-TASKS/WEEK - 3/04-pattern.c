// Create star triangle pattern in C by using nested for loop
// Pattern :
// *       *
//   *   *
//     *
//   *   *
// *       *

#include <stdio.h>

void main() {
    int rowCount;
    printf("\n\nEnter an odd no. for no. of rows : ");
    scanf("%d", &rowCount);

    for(int i = 0 ; i < rowCount ; i++) {
        printf("\n");
        for(int j = 0 ; j < rowCount ; j++)
            ((i == j) || (i + j == rowCount - 1)) ? printf("* ") : printf("  ");
    }
    printf("\n\n\n");
}