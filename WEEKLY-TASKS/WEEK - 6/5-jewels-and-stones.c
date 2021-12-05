#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isUprCase(char ch) {
    return ((int)ch - 65) < 26;
}

int main() {
    char jewels[52], uprJewel[26] = {}, lwrJewel[26] = {};
    char stones[1024], uprStone[1024] = {}, lwrStone[1024] = {};

    printf("\n\nEnter jewels : ");
    scanf("%s", jewels);
    printf("Enter stones : ");
    scanf("%s", stones);


    int jewelSize = strlen(jewels);
    for(int i = 0 ; i < jewelSize ; i++) {
        if(isUprCase(jewels[i])) {
            int ind = (int)jewels[i] - 65;
            uprJewel[ind]++;
        }
        else {
            int ind = (int)jewels[i] - 97;
            lwrJewel[ind]++;
        }
    }


    int stoneSize = strlen(stones);
    for(int i = 0 ; i < stoneSize ; i++) {
        if(isUprCase(stones[i])) {
            int ind = (int)stones[i] - 65;
            uprStone[ind]++;
        }
        else {
            int ind = (int)stones[i] - 97;
            lwrStone[ind]++;
        }
    }

    int res = 0;
    for(int i = 0 ; i < 26 ; i++) {
        if(lwrJewel[i] > 0)
            res += lwrStone[i];
        if(uprJewel[i] > 0)
            res += uprStone[i];
    }

    printf("\nStones which are jewels : %d\n\n\n", res);
    return 0;
}