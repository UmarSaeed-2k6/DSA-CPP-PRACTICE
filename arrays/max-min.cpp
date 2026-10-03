#include <iostream>
using namespace std;

void maxMinSubarray(int arr[], int size) {
    int maxSum = arr[0];
    int minSum = arr[0];
    int currMax = 0;
    int currMin = 0;

    for (int i = 0; i < size; i++) {
        currMax += arr[i];
        if (currMax > maxSum) maxSum = currMax;
        if (currMax < 0) currMax = 0;

        currMin += arr[i];
        if (currMin < minSum) minSum = currMin;
        if (currMin > 0) currMin = 0;
    }

    cout << "Max Subarray Sum: " << maxSum << "\n";
    cout << "Min Subarray Sum: " << minSum << "\n";
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = 9;
    maxMinSubarray(arr, size);
    return 0;
}