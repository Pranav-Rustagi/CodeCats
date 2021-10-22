// Write a C program to count the total number of notes in a given amount. 

#include <stdio.h>

int main(){
    int amount, noteCount = 0;
    printf("\n\nEnter total amount : ");
    scanf("%d", &amount);

    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    
    printf("\nSummary :\n");
    for(int i = 0 ; amount ; i++) {
        int count = amount / notes[i];
        if(count) {
            printf("Count for Rs.%d notes : %d\n", notes[i], count);
            amount %= notes[i];
            noteCount += count;
        }
    }

    printf("\nTotal notes : %d\n\n\n", noteCount);
    return 0;
}