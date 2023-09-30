#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int identifier[n];

    for (int i = 0; i < n; i++) {
        cin >> identifier[i];
    }

    int current = 0;
    for (int i = 1; i <= n; i++) {
        int num_identifier = n - i + 1;
        if (k <= num_identifier) {
            current = identifier[i - 1];
            break;
        } else {
            k -= num_identifier;
        }
    }

    cout << current << endl;

    return 0;
}
