// C Program to find sum of two matrices
#include<iostream>
using namespace std;

int main() {
    int R, C, **arr1, **arr2, **res;
    cin >> R >> C;

    arr1 = new int*[R];
    for(int i = 0 ; i < R ; i++) {
        arr1[i] = new int[C];
        for(int j = 0 ; j < C ; j++)
            cin >> arr1[i][j];
    }

    arr2 = new int*[R];
    for(int i = 0 ; i < R ; i++) {
        arr2[i] = new int[C];
        for(int j = 0 ; j < C ; j++)
            cin >> arr2[i][j];
    }

    res = new int*[R];
    for(int i = 0 ; i < R ; i++) {
        res[i] = new int[C];
        for(int j = 0 ; j < C ; j++)
            res[i][j] = arr1[i][j] + arr2[i][j];
    }

    for(int i = 0 ; i < R ; i++)
        for(int j = 0 ; j < C ; j++)
            cout << res[i][j] << "\t";
}