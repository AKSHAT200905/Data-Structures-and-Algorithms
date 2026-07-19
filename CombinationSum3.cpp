#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> combination;
        backtrack(k,n,1,combination,result);
        return result;
    }
    void backtrack(int k, int n, int index,vector<int>& combination, vector<vector<int>>& result) {
        if(combination.size()==k) {
            if(n==0) result.push_back(combination); 
            return;
        }
        for(int i=index;i<=9;i++) {
            if(i>n) break;
            combination.push_back(i);
            backtrack(k,n-i,i+1,combination,result);
            combination.pop_back();
        }
    }    
};
int main() {
    Solution sol;
    int k = 3, n = 9;
    vector<vector<int>> combinations = sol.combinationSum3(k, n);
    cout << "Combinations of " << k << " numbers that add up to " << n << ":" << endl;
    for(const auto& comb : combinations) {
        cout << "[";
        for(size_t i = 0; i < comb.size(); ++i) {
            cout << comb[i];
            if(i < comb.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
}