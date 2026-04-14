#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void cook(){
            cout << "I am a Cook" << endl;
        }
};

class B: public A{
    public:
        B(){
            cout << "This is B class" << endl;
        }
};

int main(){
    B bob;
    bob.cook();

    return 0;
}