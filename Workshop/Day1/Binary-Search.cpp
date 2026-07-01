#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (key == arr[mid]) {
            return mid;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            cout << "The Searched Item Is Not Present in The Array";
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 14, 18, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, 18, n);
    if(index==-1)
    {
        cout << "Index of the searched element Not Found, the element doesn't exist in the array" << endl;
    }
    else
    {
        cout << "Index of the searched element: " << index << endl;
    }
}