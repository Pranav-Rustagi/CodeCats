#include <stdbool.h>

bool checkAlmostEquivalent(char * word1, char * word2){
    char letterWord1[26] = {0}, letterWord2[26] = {0};
    
    int sizeOfWord1 = strlen(word1);
    for(int i = 0 ; i < sizeOfWord1 ; i++) {
        int ind = (int)word1[i] - 97;
        letterWord1[ind]++;
    }
    
    int sizeOfWord2 = strlen(word2);
    for(int i = 0 ; i < sizeOfWord2 ; i++) {
        int ind = (int)word2[i] - 97;
        letterWord2[ind]++;
    }
    
    
    for(int i = 0 ; i < 26 ; i++) {
        if(abs(letterWord1[i] - letterWord2[i]) > 3)
            return false;
    }
    
    return true;
}