// Program to find multiplication of two matrices
#include <iostream>
using namespace std;

int main() {
    int R1, C1, R2, C2, **arr1, **arr2, **res;
    cin >> R1 >> C1;

    arr1 = new int*[R1];
    for(int i = 0 ; i < R1 ; i++) {
        arr1[i] = new int[C1];
        for(int j = 0 ; j < C1 ; j++)
            cin >> arr1[i][j];
    }

    cin >> R2 >> C2;
    if(R2 != C1)
        return 0;
    
    arr2 = new int*[R2];
    for(int i = 0 ; i < R2 ; i++) {
        arr2[i] = new int[C2];
        for(int j = 0 ; j < C2 ; j++)
            cin >> arr2[i][j];
    }

    res = new int*[R1];
    for(int i = 0 ; i < R1 ; i++) {
        res[i] = new int[C2];
        for(int j = 0 ; j < C2 ; j++) {
            res[i][j] = 0;
            for(int k = 0 ; k < R2 ; k++)
                res[i][j] += arr1[i][k] * arr2[k][j];
        }
    }

    for(int i = 0 ; i < R1 ; i++)
        for(int j = 0 ; j < C2 ; j++)
            cout << res[i][j] << "\t";
}