// #include <iostream>
// using namespace std;

// // Function to partition the array
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];   // choosing last element as pivot
//     int i = low - 1;         // index of smaller element

//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// // Quick Sort function
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high); // partition index

//         quickSort(arr, low, pi - 1);  // left part
//         quickSort(arr, pi + 1, high); // right part
//     }
// }

// // Main function
// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     quickSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr, int st , int end){
    int idx = st-1;
    int pivot = arr[end];

    for(int j = 0; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }

    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}


void quicksort(vector<int> &arr, int st, int end){
    if(st<end){
        int pivotidx = partition(arr, st, end);
        quicksort(arr, st, pivotidx-1);
        quicksort(arr, pivotidx+1, end);
    }
}