#include <iostream>

using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) {
        return x;
    }

    int left = 1;
    int right = x;
    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid <= x / mid) {
            result = mid; 
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return result;
}

int main() {
    int x = 16;

    int result = mySqrt(x);

    cout << "Square root of " << x << " rounded down: " << result << endl;

}
