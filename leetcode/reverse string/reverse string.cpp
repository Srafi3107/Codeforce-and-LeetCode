#include <iostream>
#include <string>

using namespace std;

string reverseWords(string s) {
    int n = s.length();
    string reversed;
    int end = n; 

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ' ' && i < end) {
          
            if (!reversed.empty()) {
                reversed += ' '; 
            }
            reversed += s.substr(i + 1, end - i - 1);
            end = i; 
        }
    }


    if (!reversed.empty()) {
        reversed += ' ';
    }
    reversed += s.substr(0, end);

    return reversed;
}

int main() {
    string s = "the sky is blue";
    string result = reverseWords(s);
    cout << "Reversed Words: " << result << endl;
}
