// Program to Read a Matrix and find Sum and Product of all elements
#include<bits/stdc++.h>
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

    int sum = 0, product = 1;
    for(int i = 0 ; i < R ; i++) {
        for(int j = 0 ; j < C ; j++) {
            sum += arr[i][j];
            product *= arr[i][j];
        }
    }

    cout << sum << " " << product;
}