// Write a C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>

short getInputType(short asciiVal);

int main() {
    short ch;
    printf("\n\nEnter a character : ");
    ch = getchar();
    
    switch(getInputType(ch)) {
        case 1: printf("\n\'%c\' is an alphabet.\n\n\n", ch);
                break;
        case 2: printf("\n'%c\' is a digit.\n\n\n", ch);
                break;
        case 0: printf("\n'%c\' is a special character.\n\n\n", ch);
                break;
    }
    return 0;
}


short getInputType(short asciiVal) {
    if((asciiVal >= 65 && asciiVal <= 90) || (asciiVal >= 97 && asciiVal <= 122))
        return 1;
    if(asciiVal >= 48 && asciiVal <= 57)
        return 2;
    return 0;
}