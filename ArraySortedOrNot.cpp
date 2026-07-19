#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i=1;i<n;i++) {
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}

int main() {
    int n,arr[1000];
    cout << "Enter the size of array:";
    cin>>n;
    cout <<"Enter the elements of array: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    if(isSorted(arr,n)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}