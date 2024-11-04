#include <iostream>
using namespace std;

void Sort(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(arr[min], arr[i]);
    }
}

// Muhammad Junaid
// F2023266884

int lmsSearch(int arr[], int size, int target) {
    int s = 0;
    int e = size - 1;
    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == target) {
            cout << "Book with ID " << target << " found at index " << mid << endl;
            return mid;
        }
        if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    cout << "The ID " << target << " not found in ID list" << endl; //If ID not found
    return -1; 
}

int main() {
    int n, target;
    cout << "Enter the size for ID list: ";
    cin >> n;
    int BookID[n];
    cout << "Enter the IDs: ";
    for (int i = 0; i < n; i++) {
        cin >> BookID[i];
    }
    cout << "Enter the ID you want to search: ";
    cin >> target;
    Sort(BookID, n);
    lmsSearch(BookID, n, target);

    return 0; 
}

