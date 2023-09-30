#include <iostream>
#include <algorithm>

using namespace std;

long long int sumOfDigits(long long int num) {
    long long int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    long long int test_cases;
    cin >> test_cases;

    while (test_cases--) {

        long long int n;
        cin >> n;

        long long int digitSum = sumOfDigits(n);
        long long int gcd = __gcd(n, digitSum);

        if (gcd > 1) {
            cout << n << endl;
            break;
        }
        n++;
    }
}
