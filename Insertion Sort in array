#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
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
    insertionSort(array,size);
    cout<<"Sorted array :";
    for(int i=0;i<size;i++){
        cout<<array[i]<<",";
    }
}
