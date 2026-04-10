//Sum using pointer

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int *p = arr; // we don't use '&' bcz 'arr' is actually the address of 0th index

    int sum = 0;

    for(int i=0; i<5; i++){
        sum += *(p+i);
        // OR
        // sum += *(arr + i); //-> we can directly writ this, as 'arr' is the address of the array (0th index)
    }

    cout << "Sum: " << sum << endl;

    return 0;
}