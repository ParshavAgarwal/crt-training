#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};

    int *p = arr; // pointer will store the address to the start of the array, 0th index ka address

    cout << *p << endl; // 10
    cout << *p + 1 << endl; // 11 -> phle de-ref, then plus
    cout << *(p+1) << endl; //20

    return 0;
}