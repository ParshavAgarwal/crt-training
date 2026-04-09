// Question: Check if a student is eligible for an attendance award (fewer than 2 absents and never 3 consecutive lates).

#include <bits/stdc++.h>
using namespace std;

bool checkRecord(string s) {
    int absent = 0;
    int cons_late = 0;

    for (auto x : s) {
        if (x == 'P') {
            cons_late = 0; // agar P ho gaya to L consecutive nhi rahega, therefore -> reset consecutive Late
        }
        else if (x == 'A') {
            cons_late = 0; // consecutive Late -> reset
            absent++;
        }
        else {
            cons_late++;
            if (cons_late >= 3) {
                return false;
            }
        }
    }

    return (absent < 2);

    //method 1
    /*
    int A = 0;

    for(int i=0; i<s.size(); i++){

        if (s[i] == 'A') A++;

        else if (s[i] == 'L') {
            if (i + 2 < s.size() && s[i+1] == 'L' && s[i+2] == 'L'){
                return false;
            }
        }
    }

    if(A >= 2) return false;

    return true;*/
}

int main() {
    string attendance;
    cout << "Enter attendance record: ";
    cin >> attendance;

    if (checkRecord(attendance)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}