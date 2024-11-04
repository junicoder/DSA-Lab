// Task 3: Write a program in C++ that sorts the array of characters using Insertion Sort.

#include <iostream>
using namespace std;

void insertionSort(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main() {
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;

    char arr[n];
    cout << "Enter the characters: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array of characters: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
