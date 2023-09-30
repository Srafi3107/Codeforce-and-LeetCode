#include <iostream>

using namespace std;

int maxRob(int* nums, int n) {
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    int prevPrev = nums[0];
    int prev = max(nums[0], nums[1]);
    int current = 0;

    for (int i = 2; i < n; i++) {
        current = max(prev, prevPrev + nums[i]);
        prevPrev = prev;
        prev = current;
    }

    return current;
}

int main() {
    int nums[] = {1,2,3,1}; 
    int n = sizeof(nums) / sizeof(nums[0]);

    int maxAmount = maxRob(nums, n);

    cout << "Maximum amount of money you can rob: " << maxAmount << endl;

}
