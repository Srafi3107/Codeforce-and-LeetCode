#include <iostream>

using namespace std;

void sortColors(int nums[], int n) {
    int left = 0;          
    int right = n - 1;    
    int current = 0;       

    while (current <= right) {
        if (nums[current] == 0) {
            swap(nums[left], nums[current]);
            left++;
            current++;
        } else if (nums[current] == 2) {
            swap(nums[right], nums[current]);
            right--;
        } else {
            current++;
        }
    }
}

int main() {
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original Array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    sortColors(nums, n);

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

}

