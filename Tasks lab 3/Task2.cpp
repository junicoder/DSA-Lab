// Task 2: Write a C++ Program to take a sorted array and a target value from user
// and then find the target value that appears in the array using Binary Search.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the sorted array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);
    if (result != -1)
        cout << "Target found at index " << result << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}
