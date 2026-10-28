#include<bits/stdc++.h>
using namespace std;

class Solution1 {
    public:
    vector<int> reverseArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> rev(n);
        for(int i=0;i<n;i++) {
            rev[i] = arr[n-i-1]; 
        }
        return rev;
    }
};

class Solution2 {
    public:
    vector<int> reverseArray(vector<int>& arr) {
        int p1=0;
        int p2 = arr.size()-1;
        while(p1<p2) {
            swap(arr[p1],arr[p2]);
            p1++;
            p2--;
        }
    }
};

int main() {
    int n;
    cout << "Enter the vector size: ";
    cin >> n;
    cout << "Enter " << n << " vector elements: ";
    vector<int> arr1(n);
    for(int i=0;i<n;i++) {
        cin >> arr1[i];
    }
    Solution1 sol1;
    vector<int> result =  sol1.reverseArray(arr1);
    cout<<"\nReverse Array: ";
    for(int val: result) {
        cout<< val<<" ";
    }
    cout << endl;


    
    Solution2 sol2;
    int m;
    cout << "Enter the vector size: ";
    cin >> m;
    cout << "Enter " << m << "vector elements: ";
    vector<int> arr2(m);
    for(int i=0;i<arr2.size();i++) {
        cin>>arr2[i];
    } 
    sol2.reverseArray(arr2);
    for (int num : arr2) {
        cout << num << " ";
    }
    return 0;
}
