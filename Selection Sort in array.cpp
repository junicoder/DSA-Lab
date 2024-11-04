#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted array
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        // Swap the found minimum element with the first element
        if (min != i)
            swap(arr[min], arr[i]);
    }
}
int main (){
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int array[size];
    cout<<"Enter Elements of array :";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Unsorted array :";
    for(int i=0;i<size;i++){
        cout<<array[i]<<",";
    }
    cout<<endl;
    selectionSort(array,size);
    cout<<"Sorted array :";
    for(int i=0;i<size;i++){
        cout<<array[i]<<",";
    }
}
