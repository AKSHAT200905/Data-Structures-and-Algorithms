#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool func(int ind, int sum, vector<int> &nums) {
        if (ind == nums.size()) {
            return sum == 0;
        }
        return func(ind + 1, sum - nums[ind], nums) | func(ind + 1, sum, nums);
    }
public:
    bool checkSubsequenceSum(vector<int>& nums, int target) {
        return func(0, target, nums);
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    int target = 5;
    cout << sol.checkSubsequenceSum(nums, target);
    return 0;
}