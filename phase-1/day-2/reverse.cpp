#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Using String
int rev(int &num){
    string s = to_string(num); // converts to_string and stoeres it in 's' | actual num string m nhi badalta
    reverse(s.begin(), s.end());
    int n = stoi(s); // string to int

    return n;
}

// Reverse using int (normal way)
int reverse1(int &num) {
    int reversed_num = 0;
    
    // Check if the number is negative and handle it
    bool is_negative = num < 0;
    if (is_negative) {
        num = -num;
    }

    while (num > 0) {
        int last_digit = num % 10;                     // Extract the last digit
        reversed_num = (reversed_num * 10) + last_digit; // Append it
        num = num / 10;                                // Remove the last digit from the original number
    }

    // Reapply the negative sign if necessary
    if (is_negative) {
        reversed_num = -reversed_num;
    }

    return reversed_num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //cout << "Reversed: " << reverse1(num) << endl;
    cout << "Reversed: " << rev(num) << endl;

    return 0;
}