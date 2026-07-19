#include<bits/stdc++.h>
using namespace std;

class InsertionSort {
    public:
    vector<int> insertionSort(vector<int>& num) {
        int n = num.size();
        for(int i=1;i<n;i++) {
            int key=num[i];
            int j=i-1;
            while(j>=0 && num[j]> key) {
                num[j+1] = num[j];
                j--;
            }
            num[j+1] = key;
        }
        return num;
    }
};

int main() {
    InsertionSort is;
    
    vector<int> num = {10, 46, 21, 54, 72, 90};
    
    cout << "Before Using Insertion Sort: " << endl;
    for (int num : num) {
        cout << num << " ";
    }
    cout << endl;
    num = is.insertionSort(num);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : num) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}