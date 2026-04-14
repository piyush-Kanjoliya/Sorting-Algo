#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a[n];
    cout<<"Enter the values in array: ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    for(int i = 0; i<n; i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    cout<<"The sorted array: ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

// for(int i = 0; i<n; i++){
//     int key = a[i];
//     int j = i-1;
//     while(j>= 0 && a[j] > key){
//         a[j+1] = a[j];
//         j--;
//     }
//     a[j+1] = key;
// }
