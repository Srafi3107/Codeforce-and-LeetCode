#include <iostream>

using namespace std;

int minCandies(int* ratings, int n) {
    int candies[n];
    

    for (int i = 0; i < n; i++) {
        candies[i] = 1;
    }


    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }


    for (int i = n - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = max(candies[i], candies[i + 1] + 1);
        }
    }

    int totalCandies = 0;
    

    for (int i = 0; i < n; i++) {
        totalCandies += candies[i];
    }

    return totalCandies;
}

int main() {
    int ratings[] = {1,2,2};

    int n = sizeof(ratings) / sizeof(ratings[0]);

    int minCandiesNeeded = minCandies(ratings, n);

    cout << "Minimum number of candies needed: " << minCandiesNeeded << endl;

}
