#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
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
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i] > target) break;
            Combination.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], i+1, Combination, result);
            Combination.pop_back();
        }
    }
};
int main() {
    Solution sol;
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> result = sol.combinationSum2(candidates, target);
    cout<<"The unique combinations that sum up to "<<target<<" are:"<<endl;
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