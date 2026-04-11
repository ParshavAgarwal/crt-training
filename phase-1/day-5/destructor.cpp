#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        int x;
        A(int val){
            x = val;
            cout<<"B" << x << " ";
        }

        ~A(){
            cout << "D" << x << " ";
        }
};

int main(){
    A a(1), b(2); // B1 B2 D2 D1

    // this happens bcz -> safai Last m hoti hain
    // Constructor stores 'Objects' in Stack manner
    // Constructor : Stack -> a, b
    // Destructor : Will remove 'b' (top), stack -> a
    // Destructor : Will remove 'a' (top), stack -> 
    //therefor, phle b(2) ka destructor call hoga, then a(1) ka
}