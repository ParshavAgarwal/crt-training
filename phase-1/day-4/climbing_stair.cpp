//70) Climbing Stairs
// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include <bits/stdc++.h>
using namespace std;

int climbing_ways(int n, vector<int>&dp){

    //base condition
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!= -1) return dp[n];

    //reccurence relation
    int one = climbing_ways(n-1, dp); //first possibility -> 1 step liya
    int two = climbing_ways(n-2, dp); // second possibility -> 2 step liye

    dp[n] = one + two; //storing the value of rec(n) in dp array

    //return statement
    return one + two;
}

int main(){
    int n;
    cout << "Enter the number of steps in stairs: ";
    cin >> n;

    vector<int>dp(n+1, -1); // n+1 because hum n (steps) ki values par store karayenge, and vector 0th index se start karta hain

    cout << climbing_ways(n, dp) << endl;
}