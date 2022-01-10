// Program to Read and Print a RxC Matrix, R and C must be input by the User
#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C, **arr;
    cin >> R >> C;

    arr = new int*[R];

    for(int i = 0 ; i < R ; i++) {
        arr[i] = new int[C];
        for(int j = 0 ; j < C ; j++)
            cin >> arr[i][j];
    }

    for(int i = 0 ; i < R ; i++)
        for(int j = 0 ; j < C ; j++)
            cout << arr[i][j] << "\t";
}