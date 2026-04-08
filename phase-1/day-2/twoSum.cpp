// 1) Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;

        for (int i=0; i<nums.size(); i++){
            int req = target -nums[i];

            if(mp.count(req)){
                return {mp[req], i};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cout << "Give target: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);
    cout << "Result: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}