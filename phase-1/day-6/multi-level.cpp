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
        void play(){
            cout << "I can Play" << endl;
        }
};

class C: public B{
    public:
        void drive(){
            cout << "I can drive" << endl;
        }
};

int main(){
    C bob;
    bob.cook();
    bob.play();
    bob.drive();

    return 0;
}