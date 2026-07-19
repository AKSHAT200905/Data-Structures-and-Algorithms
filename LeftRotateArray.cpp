#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void leftArrayRotate(vector<int>& nums){
        int temp = nums[0];
        for(int i=1;i<nums.size();++i) {
            nums[i-1] = nums[i];
        }
        nums[nums.size()-1] = temp;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
    sol.leftArrayRotate(nums);
    for(int num: nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}