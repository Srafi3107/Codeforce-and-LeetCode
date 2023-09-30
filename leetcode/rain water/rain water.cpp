#include <iostream>

using namespace std;

int trap(int* height, int heightSize) {
    if (heightSize <= 2) {
        return 0;
    }

    int leftMax[heightSize];
    int rightMax[heightSize];


    leftMax[0] = height[0];
    for (int i = 1; i < heightSize; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }


    rightMax[heightSize - 1] = height[heightSize - 1];
    for (int i = heightSize - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int trappedWater = 0;

  
    for (int i = 1; i < heightSize - 1; i++) {
        int minHeight = min(leftMax[i], rightMax[i]);
        trappedWater += max(minHeight - height[i], 0);
    }

    return trappedWater;
}

int main() {
    int height[] = {4,2,0,3,2,5};
    int heightSize = sizeof(height) / sizeof(height[0]);

    int trappedWater = trap(height, heightSize);

    cout << "Amount of trapped water: " << trappedWater << endl;

}
