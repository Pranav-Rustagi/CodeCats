// Program to Read a Matrix and Print Diagonals
#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, **arr;
    cin >> R;

    arr = new int*[R];
    for(int i = 0 ; i < R ; i++) {
        arr[i] = new int[R];
        for(int j = 0 ; j < R ; j++)
            cin >> arr[i][j];
    }

    for(int i = 0 ; i < R ; i++)
        cout << arr[i][i] << "\t";

    cout << endl;

    for(int i = 0 ; i < R ; i++)
        cout << arr[i][R - i - 1] << "\t";
}