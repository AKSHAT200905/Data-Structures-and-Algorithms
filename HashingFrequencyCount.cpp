#include<bits/stdc++.h>
using namespace std;

void countFrequencyBrute(int arr[],int n) {
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++) {
        if(visited[i] == true) 
            continue;
        
        int count=1;
        for(int j=i+1;j<n;j++) {
            if(arr[i] == arr[j]) {
                visited[j] =true;
                count++;
            }
        }
        cout<< arr[i] << " " << count << endl;
    }
}

void countFrequencyOptimal(int arr[],int n) {
    unordered_map<int,int> map;
    for(int i=0;i<n;i++) {
        map[arr[i]]++;
    }
    for(auto x:map) {
        cout << x.first << " " << x.second <<endl;
    }
} 

int main() {
    int arr[] = {10,20,30,10,15,21,54,9,21,54,54};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFrequencyBrute(arr,n);
    countFrequencyOptimal(arr,n);
    return 0;
}