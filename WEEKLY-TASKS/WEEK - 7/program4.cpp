// Program to Transpose a Matrix
#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C, **arr, **res;
    cin >> R >> C;

    arr = new int*[R];
    for(int i = 0 ; i < R ; i++) {
        arr[i] = new int[C];
        for(int j = 0 ; j < C ; j++)
            cin >> arr[i][j];
    }


    res = new int*[C];
    for(int i = 0 ; i < C ; i++) {
        res[i] = new int[R];
        for(int j = 0 ; j < R ; j++)
            res[i][j] = arr[j][i];
    }


    for(int i = 0 ; i < C ; i++)
        for(int j = 0 ; j < R ; j++)
            cout << res[i][j] << "\t";
}