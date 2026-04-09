// Question: Given a string s, return the first letter to appear twice.

#include <bits/stdc++.h>
using namespace std;

char repeatedCharacter(string s) {
    unordered_map<char, int> mp;

    // twoSum wala apporach -> naye 'char' ko map m dalenge, and check karenge ki phle y mila hain kya? -> agar haa - mtlb phli baar second appearance - return
    for (auto x : s) {
        if (mp.count(x)) {
            return x;
        } else {
            mp[x]++;
        }
    }

    // second approach in for-each loop => push karo, and saath saath m check karte raho
    for (auto x : s) {
        mp[x]++;

        if (mp[x] == 2) return x;
    }

    return s[0];
}

int main() {
    string word;
    cout << "Enter a string: ";
    cin >> word;

    char result = repeatedCharacter(word);
    cout << "First repeated character: " << result << endl;

    return 0;
}
