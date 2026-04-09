// Question: Check if all 'a's appear before all 'b's in a given string.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkString(string s) {
        // Using For-each loop
        bool b_found = false;
        for (auto x : s) {
            if (x == 'b') b_found = true;

            // checking -> b mil gaya hain && iske baad koi 'a' hain kyaa?
            else if (b_found && x == 'a') {
                return false;
            }
        }

        return true;

        // For-loop
        /*
        for (int i=0; i<s.size(); i++){
            int k = i;
            if (s[k] == 'b'){
                if(s[++k] == 'a'){
                    return false;
                }
            }
        }
        return true;*/
    }
};

int main() {
    string word;
    cout << "Enter a string (only 'a' and 'b'): ";
    cin >> word;

    Solution obj;
    if (obj.checkString(word)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}