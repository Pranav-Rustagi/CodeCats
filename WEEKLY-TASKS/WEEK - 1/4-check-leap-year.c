// Write a C program to check whether a year is a leap year or not.

#include <stdio.h>

short isLeap(short year);

int main() {
    short year;
    printf("\n\nEnter year : ");
    scanf("%hd", &year);

    if(isLeap(year))
        printf("\n%hd is a leap year.\n\n\n", year);
    else
        printf("\n%hd is not a leap year.\n\n\n", year);
}

short isLeap(short year){
    if(year % 4 == 0) {
        if(year % 100 == 0)
            return (year % 400 == 0);
        else
            return 1;
    }
    return 0;
}