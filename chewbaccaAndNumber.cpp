#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        // Skip the first digit if it is '9'
        if (i == 0 && input[i] == '9') {
            continue;
        }

        // Convert the digit to its numeric value
        int digit = input[i] - '0';
        
        // If the digit is greater than 4, replace it with (9 - digit)
        if (digit > 4) {
            input[i] = (char)((9 - digit) + '0');
        }
    }

    cout << input;

    return 0;
}
