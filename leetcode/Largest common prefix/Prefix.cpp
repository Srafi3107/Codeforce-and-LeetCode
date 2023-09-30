#include <iostream>

using namespace std;

string longestCommonPrefix(string* strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }
    
    int len = strs[0].length();
    
    for (int i = 0; i < len; i++) {
        char c = strs[0][i];
        
        for (int j = 1; j < strsSize; j++) {
            if (i >= strs[j].length() || strs[j][i] != c) {
                return strs[0].substr(0, i); 
            }
        }
    }
    
    return strs[0]; 
}

int main() {
    string strs[] = {"House", "Horse", "Hospital"}; 
    int strsSize = sizeof(strs) / sizeof(strs[0]); 

    string result = longestCommonPrefix(strs, strsSize);

    cout << "Longest Common Prefix: " << result << endl;
}
