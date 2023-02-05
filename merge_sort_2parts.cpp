#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

void merge(vector<int>& arr, vector<int> left, vector<int> right) 
{
    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) 
    {
        if (left[i] <= right[j]) 
        {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < left.size()) 
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < right.size()) 
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr) 
{
    if (arr.size() < 2) 
    {
        return;
    }
    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    mergeSort(left);
    mergeSort(right);
    merge(arr, left, right);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    auto start = chrono::high_resolution_clock::now();
    mergeSort(arr);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\nTime taken by function: " << duration.count() << " microseconds" << endl;
    return 0;
}
