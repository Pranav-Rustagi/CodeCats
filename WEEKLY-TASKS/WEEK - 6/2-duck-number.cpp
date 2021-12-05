#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check_duck(string N){
    if(N[0] == '0')
        return false;
        
    for(int i = 1 ; i < N.length() ; i++)
        if(N[i] == '0')
            return true;
            
    return false;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        string N;
        cin >> N;
        if(check_duck(N))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}