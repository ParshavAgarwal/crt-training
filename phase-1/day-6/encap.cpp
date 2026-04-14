//Encapsulation
// use Private -> Data members and Public -> methods

#include<bits/stdc++.h>
using namespace std;

class A{
    int marks;
    public:
        void setMarks(int x){
            marks = x;
        }
        void getMarks(){
            cout << marks << endl;
        }
};

int main(){
    A aryan;
    aryan.setMarks(30); // setting the marks
    aryan.getMarks();  // getting the marks
    return 0;
}