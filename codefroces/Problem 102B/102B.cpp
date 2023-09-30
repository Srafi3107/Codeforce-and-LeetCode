#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    int count = 0;

    while (num >= 10) {
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        num = sum;
        count++;
    }

    cout << count << endl;
}
