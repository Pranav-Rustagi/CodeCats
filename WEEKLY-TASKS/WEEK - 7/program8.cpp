// program to check two matrices are identical or not
#include <iostream>
using namespace std;
#define sizeArr 1000

bool areIdendical(int **arr1, int **arr2, int R1, int C1, int R2, int C2) {
    if((R1 != R2) || (C1 != C2))
        return false;
    
    for(int i = 0 ; i < R1 ; i++)
        for(int j = 0 ; j < C1 ; j++)
            if(arr1[i][j] != arr2[i][j])
                return false;
    return true;
}


int main() {
    int R1, C1, R2, C2, **arr1, **arr2;

    cin >> R1 >> C1;
    arr1 = new int*[R1];
    for(int i = 0 ; i < R1 ; i++) {
        arr1[i] = new int[C1];
        for(int j = 0 ; j < C1 ; j++)
            cin >> arr1[i][j];
    }

    cin >> R2 >> C2;
    arr2 = new int*[R2];
    for(int i = 0 ; i < R2 ; i++) {
        arr2[i] = new int[C2];
        for(int j = 0 ; j < C2 ; j++)
            cin >> arr2[i][j];
    }

    if(areIdendical(arr1, arr2, R1, C1, R2, C2))
        cout << "YES";
    else
        cout << "NO";
}