#include <iostream>

using namespace std;

void incrementOne(int* digits, int& size) {
    int carry = 1; 
    for (int i = size - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; 
        carry = sum / 10; 
    }
    

    if (carry > 0) {
        int* newDigits = new int[size + 1];
        newDigits[0] = carry;
        for (int i = 0; i < size; i++) {
            newDigits[i + 1] = digits[i];
        }
        delete[] digits; 
        digits = newDigits;
        size++; 
    }
}

int main() {
    int digits[] = {1 ,5 ,7}; 
    int size = sizeof(digits) / sizeof(digits[0]); 

    incrementOne(digits, size);

    cout << "Resulting Array: ";
    for (int i = 0; i < size; i++) {
        cout << digits[i] << " ";
    }
    cout << endl;

}
