// Task 1: Write a C++ Program to take your name characters as array and a target value(a) from user
// and then count how many times the target value appears in the array by using Linear Search.

#include <iostream>
using namespace std;

int countOccurrences(char arr[], int n, char target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of characters in your name: ";
    cin >> n;

    char arr[n];
    cout << "Enter the characters of your name: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    char target;
    cout << "Enter the target character to count: ";
    cin >> target;

    int occurrences = countOccurrences(arr, n, target);
    cout << "The character '" << target << "' appears " << occurrences << " times in the array." << endl;

    return 0;
}
