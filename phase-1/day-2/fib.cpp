// 509) Fibonacci Number

#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
        
    //Using Vector
    if(n==0) return 0;
    if(n==1) return 1;

    vector<int> nums(n+1);
    nums[0] = 0;
    nums[1] = 1;
    for(int i=2; i<=n; i++){
        nums[i] = nums[i-1] + nums[i-2];
    }

    return nums[n];

    //Normally
    /*
    int a =0;
    int b=1;
    if (n>0){
        for (int i=2; i<=n; i++){ // i=2, bcz 0,1 index already bata diya -> a=0, b=1
        b = a+b;
        a = b-a;
        }
    }
    else
        return 0;

    return b;*/
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>> n;

    cout << fib(n);
    return 0;
}