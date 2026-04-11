#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5; // n must be odd here
    for(int i=0; i<n; i++){ //rows
        for(int j=0; j<n; j++){ //col
            
            if( i == j || i+j == n-1){ // 0==0 || 0 + 3 == 4-1
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}