#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        void cook(){
            cout << "I can cook";
        }
};

class B: virtual public A{}; // class B: public virtual A{};
class C: virtual public A{};

//key word is 'virtual', virtual public A se A k method virtually inherit karega
class D: public B, public C{};

int main(){
    D d;
    d.cook();
    // virtual nhi hota to 'ambiguity aati'
    // ab .cook() directly class A se call ho raha hain
    return 0;
}