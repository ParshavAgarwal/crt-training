// Question: Detect whether the capitalization of a given word is correct.
/*Return True if:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".*/

#include<bits/stdc++.h>
using namespace std;


bool detectCapitalUse(string word) {
        
    int upper = 0;
    int lower = 0;
    bool first = isupper(word[0]);

    for(auto x:word){
        if(isupper(x)) upper++;
        if(islower(x)) lower++;
    }

    if(upper == word.size() || lower == word.size()){
        return true;
    }
    else if(first && upper == 1){
        return true;
    }

    return false;

    /*
    //for all Upper
    bool allUpper = true;
    for(int i=0; i<word.size(); i++){
        if (!isupper(word[i])){
            allUpper = false;
        }
    }
    if (allUpper) return true;

    //for all lower
    bool allLower = true;
    for(int i=0; i<word.size(); i++){
        if(!islower(word[i]))
            allLower = false;
    }
    if (allLower) return true;

    // for capital
    bool cap = true;
    if (isupper(word[0])){
        for(int i=1; i<word.size(); i++){
            if (!islower(word[i]))
                cap = false;
        }
        if (cap) return true;
    }

    return false;*/
}

int main(){
    string word;
    cout<< "Enter a word: ";
    cin >> word;

    cout << detectCapitalUse(word)<< endl;

    return 0;
}