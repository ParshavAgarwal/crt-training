#include <bits/stdc++.h>
using namespace std;

//Compile-time Polymorphism
//method overloading
class A{
    public:
        void add(int a, int b){
            cout << a+b << endl;
        }
        void add(int a, int b, int c){
            cout << a+b+c << endl;
        }
        void add(float a, float b){
            cout << a + b << endl;
        }
};

int main(){
    A a;
    a.add(1,2);
    a.add(1,2,1);
    //a.add(1.2, 1.3) -> it will give ambguity
    a.add(1.2f,1.3f); //by add 'f' at end of no., we are specifying that it is float, therefore, it will not give any ambiguity.

    return 0;
}