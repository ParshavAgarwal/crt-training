#include <bits/stdc++.h>
using namespace std;

class Account{
    private:
        int bal;
        int id;
        int password;
    
    public:

        void setDetails(int x, int y, int z){
            bal = y;
            id = x;
            password = z;
        }
        friend void getDetails(Account a);
};

void getDetails(Account a){
    cout << a.password << endl;
}

int main(){
    Account as;
    as.setDetails(2,3866,565);
    getDetails(as);
}