#include <iostream>
using namespace std;

// Standard Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

// Search in Infinite Sorted Array
int infiniteBinarySearch(int arr[], int key) {
    int low = 0;
    int high = 1;

    // Increase the search range exponentially
    while (arr[high] < key) {
        low = high + 1;
        high = high * 2;
    }

    // Perform Binary Search in the found range
    return binarySearch(arr, low, high, key);
}

int main() {
    // This is only for testing.
    // In interview questions, assume the array is infinite.
    int arr[] = {10,  20,  30,  40,  50,  60,  70,  80,  90,  100,
                 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};

    int key = 130;

    int index = infiniteBinarySearch(arr, key);

    if (index == -1) {
        cout << "Element Not Found";
    } else {
        cout << "Element Found at Index: " << index;
    }

    return 0;
}