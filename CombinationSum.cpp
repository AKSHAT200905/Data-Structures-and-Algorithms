#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> Combination;
        backtrack(candidates, target, 0, Combination, result);
        return result;
    }
    void backtrack(vector<int>& candidates, int target, int index, vector<int>& Combination, vector<vector<int>>& result) {
        if(target == 0) {
            result.push_back(Combination);
            return;
        }
        for(int i=index;i<candidates.size();i++) {
            if(candidates[i] > target) continue;
            Combination.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], i, Combination, result);
            Combination.pop_back();
        }
    }
};
int main() {
    Solution sol;
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> result = sol.combinationSum(candidates, target);
    cout<<"The combinations that sum up to "<<target<<" are:"<<endl;
    for(auto& combination : result) {
        cout<<"[";
        for(int i=0;i<combination.size();i++) {
            cout<<combination[i];
            if(i<combination.size()-1) cout<<", ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}