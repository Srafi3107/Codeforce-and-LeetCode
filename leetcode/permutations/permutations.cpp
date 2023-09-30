#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void generatePermutations(int arr[], int start, int end) {
    if (start == end) {
        for (int i = 0; i <= end; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = start; i <= end; i++) {
            swap(arr[start], arr[i]);
            generatePermutations(arr, start + 1, end);
            swap(arr[start], arr[i]); 
        }
    }
}

int main() {
    int nums[] = {0,1}; 
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "All possible permutations:" << endl;
    generatePermutations(nums, 0, size - 1);

}
