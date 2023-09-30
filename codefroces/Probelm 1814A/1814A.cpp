#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long a = k;
        long long b = 2;
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }

        if (n % a == 0) {
            cout << "YES" <<endl;
        } else {
            cout << "NO" <<endl;
        }
    }

}
