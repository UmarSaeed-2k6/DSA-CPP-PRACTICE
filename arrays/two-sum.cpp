#include <iostream>
using namespace std;

void twoSum(int arr[], int size, int target) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Target found at indices: " << i << " and " << j << "\n";
                found = true;
            }
        }
    }
    if (!found) cout << "Target not found\n";
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int size = 4;
    twoSum(arr, size, 9);
    return 0;
}