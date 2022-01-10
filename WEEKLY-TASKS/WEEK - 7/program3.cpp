// Program to find Sum of all elements of each row of a matrix
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

    for(int i = 0 ; i < R ; i++) {
        int sum = 0;
        for(int j = 0 ; j < C ; j++)
            sum += arr[i][j];
        cout << sum << endl;
    }
}