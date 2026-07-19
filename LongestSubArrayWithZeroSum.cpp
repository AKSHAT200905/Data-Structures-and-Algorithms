#include<bits/stdc++.h>
using namespace std;

int maxLength(int arr[],int n) {
    unordered_map<int,int> mpp;
    int maximum=0,sum=0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
        if(sum==0) {
            maximum=i+1;
        } else {
            if(mpp.find(sum) != mpp.end()) {
                maximum = max(maximum,i-mpp[sum]);
            } else {
                mpp[sum]=i;
            }
        }
    }
    return maximum;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of array: " << endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout << maxLength(arr,n) << endl;
    return 0;
    
}

