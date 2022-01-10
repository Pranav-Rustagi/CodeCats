// Program to print lower triangle of a square matrix in C
#include <iostream>
using namespace std;

int main() {
    int M, **arr;
    cin >> M;

    arr = new int*[M];
    for(int i = 0 ; i < M ; i++) {
        arr[i] = new int[M];
        for(int j = 0 ; j < M ; j++)
            cin >> arr[i][j];
    }

    for(int i = 0 ; i < M ; i++) {
        for(int j = 0 ; j < M ; j++) {
            if(i <= j)
                cout << arr[i][j] << "\t";
            else
                cout << 0 << "\t";
        }
        cout << endl;
    }
}