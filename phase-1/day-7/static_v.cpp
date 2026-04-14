#include <bits/stdc++.h>
using namespace std;

void func(){
    static int count = 0; // static ko sirf ek baar hi memory allocate hoti hain
    // therefore, after 'static' count ko dobara memort allocate nhi hogi (count = 0), balki count = 0 dobara trigger hi nhi hoga
    count++;
    cout << count << " ";
}

int main(){
    
    for(int i=0; i<5; i++){
        func();
    }
}