//changing value using Pointer

#include<bits/stdc++.h>
using namespace std;

void change(int *p){
    p++;
}

int main(){
    int a[] = {1,2};
    int *p = a;
    cout << p << endl; //0x61fe10

    change(p);

    // cout << *p << endl;
    cout << p << endl; //0x61fe10 -> same bcz yaha 'Call by Value' ho raha hain, no 'Call by Ref'
    cout << a;
}