#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n) {
    int max=arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]> max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n,i,j,arr[10000];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int maxElement = largestElement(arr,n);
    cout << "The largest element in this array: " << maxElement << endl;
    return 0;
}