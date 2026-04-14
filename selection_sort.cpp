#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];

    cout<<"Enter the values in array: ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    // Selection Sort
    for(int i = 0; i<n-1; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }

        // Swap
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    cout<<"The sorted array is: ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}

// for(int i = 0; i<n-1; i++){
//     int min = i;
//     for(int j = i+1; j<n; j++){
//         if(a[min]> a[j]){
//             min = j;
//         }
//     }
//     int temp = a[i];
//     a[i] = a[min];
//     a[min] = temp;
// }