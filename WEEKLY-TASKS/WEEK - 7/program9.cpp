// program to check a given matrix is an identity matrix or not
#include <iostream>
using namespace std;

bool isIdentity(int **arr, int M) {
    for(int i = 0 ; i < M ; i++) {
        for(int j = 0 ; j < M ; j++) {
            if(i == j) {
                if(arr[i][j] != 1)
                    return false;
            }
            else {
                if(arr[i][j] != 0)
                    return false;
            }
        }
    }

    return true;
}

int main() {
    int M, **arr;
    cin >> M;

    arr = new int*[M];
    for(int i = 0 ; i < M ; i++) {
        arr[i] = new int[M];
        for(int j = 0 ; j < M ; j++)
            cin >> arr[i][j];
    }

    if(isIdentity(arr, M))
        cout << "YES";
    else
        cout << "NO";
}
