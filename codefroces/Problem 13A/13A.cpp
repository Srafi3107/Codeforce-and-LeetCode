#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    long long numerator = 0;
    long long denominator = 0;

    for (int base = 2; base < x; base++) {
        int num = x;
        int sum = 0;

        while (num > 0) {
            sum += num % base;
            num /= base;
        }

        numerator += sum;
        denominator++;
    }

    long long a = numerator, b = denominator;
    while (b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }

    cout << numerator / a << "/" << denominator / a << endl;

    return 0;
}
