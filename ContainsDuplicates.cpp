#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++) {
            set.insert(nums[i]);
        }
        return set.size()<nums.size();
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    bool result = sol.containsDuplicate(nums);
    if(result) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }
    return 0;
}