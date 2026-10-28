#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> combinations;
        vector<bool> used(nums.size(), false);
        backtrack(nums, combinations, used, result);
        return result;
    }
    void backtrack(vector<int>& nums, vector<int>& combinations, vector<bool>& used, vector<vector<int>>& result) {
        if(combinations.size() == nums.size()) {
            result.push_back(combinations);
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(used[i]) continue;
            used[i] = true;
            combinations.push_back(nums[i]);
            backtrack(nums, combinations, used, result);
            used[i] = false;
            combinations.pop_back();
        }
    }    
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = sol.permute(nums);
    cout << "Permutations of the array: " << endl;
    for(const auto& perm : permutations) {
        cout << "[";
        for(size_t i = 0; i < perm.size(); ++i) {
            cout << perm[i];
            if(i < perm.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
}