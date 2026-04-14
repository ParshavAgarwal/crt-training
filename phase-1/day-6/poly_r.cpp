#include <bits/stdc++.h>
using namespace std;

//Run-time Polymorphism
//method overriding
class A{
    public:
        virtual void cook(){
            cout << "I can cook" << endl;
        }
};

class B: public A{
    public:
        void cook(){
            cout << "B can book" << endl;
        }
};

int main(){
    A a;
    B b;
    a.cook();
    b.cook();

    return 0;
}