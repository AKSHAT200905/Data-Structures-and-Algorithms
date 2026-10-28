#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<long long> getNthRow(int N) {
        vector<long long> row;
        long long val=1;
        row.push_back(val);
        for(int k=1;k<N;k++) {
            val = val * (N-k)/k;
            row.push_back(val);
        }
        return row;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter N: ";
    cin >>n;
    vector <long long>result = sol.getNthRow(n);     
    for(auto num :result) {
        cout<<num<<" ";
    }   
    return 0;
}