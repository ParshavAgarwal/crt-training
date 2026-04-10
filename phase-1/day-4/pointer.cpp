#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int b = 0;

    int *p = &a;
    int *q = &b;

    if(*q || (*p)++){
        *q = 9;
    }
    cout << a << " " << b;

    return 0;
}