// Task 4: Suppose, you’re managing an online store and you have a list of product prices.
// You have to sort these prices in descending order by using selection sort to display
// the most expensive products first.

#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        if (maxIdx != i) {
            int temp = arr[i];
            arr[i] = arr[maxIdx];
            arr[maxIdx] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    int prices[n];
    cout << "Enter the prices of products: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    selectionSortDescending(prices, n);

    cout << "Prices sorted in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << prices[i] << " ";
    }
    cout << endl;

    return 0;
}
