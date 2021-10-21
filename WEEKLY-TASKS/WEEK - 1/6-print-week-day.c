// Write a C program to input week number and print week day.

#include <stdio.h>

int main() {
    short dayNo;
    printf("\n\nEnter day number : ");
    scanf("%hd", &dayNo);

    printf("\nDay : ");

    switch(dayNo) {
        case 1: printf("Monday\n\n\n");
                break;
        case 2: printf("Tuesday\n\n\n");
                break;
        case 3: printf("Wednesday\n\n\n");
                break;
        case 4: printf("Thursday\n\n\n");
                break;
        case 5: printf("Friday\n\n\n");
                break;
        case 6: printf("Saturday\n\n\n");
                break;
        case 7: printf("Sunday\n\n\n");
                break;
    }
    return 0;
}