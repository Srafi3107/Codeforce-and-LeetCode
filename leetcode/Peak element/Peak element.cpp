#include <iostream>

using namespace std;

int findPeakElement(int nums[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;


        if (nums[mid] > nums[mid + 1]) {
            right = mid; 
        } else {
            left = mid + 1; 
        }
    }

    return left; 
}

int main() {
    int nums[] = {1,2,1,3,5,6,4}; 
    int n = sizeof(nums) / sizeof(nums[0]);

    int peakIndex = findPeakElement(nums, n);

    cout << "Peak Element Index: " << peakIndex << endl;

}
