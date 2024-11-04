#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int s = 0;
    int e = size - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == target)
            return mid; // Target found
        if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    cout<<"notfound";
    return -1; // Target not found
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;
    int x=binarySearch(arr, n, target);
    cout<<x;
    return 0;
}
