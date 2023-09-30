#include <iostream>

using namespace std;

int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    int prev1 = 1; 
    int prev2 = 2; 
    int ways = 0;

    for (int i = 3; i <= n; i++) {
        ways = prev1 + prev2;
        prev1 = prev2;
        prev2 = ways;
    }

    return ways;
}

int main() {
    int n = 2; 

    int ways = climbStairs(n);

    cout << "Number of distinct ways to climb " << n << " steps: " << ways << endl;

}

