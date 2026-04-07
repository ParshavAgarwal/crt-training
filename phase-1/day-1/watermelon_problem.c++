#include <bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cout << "Enter the weight of watermelon: ";
    cin >> w;

    if(w%2 == 0){
        cout << "Each friend will have " << w/2 << " kg of watermelon";
    }
    else{
        cout << "Watermelon cannot be divided in this case";
    }
}