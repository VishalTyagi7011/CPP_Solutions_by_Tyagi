//============================================================================
// Name        : Remove.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int size = str.length();
    string result = "";

    for (int i = 0; i < size; i++) {
        // Check if the current character is a vowel
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            // If it's not a vowel, append it to the result string
            result += str[i];
        }
    }

    cout << "String after removing vowels: " << result << endl;

    return 0;
}

