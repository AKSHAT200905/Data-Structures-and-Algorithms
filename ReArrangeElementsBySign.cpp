#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> rearrangeBySign(vector<int> &nums) {
        int n = nums.size();
        vector<int> result(n,0);
        int posIndex=0,negIndex=1;
        for(int i=0;i<n;i++) {
            if(nums[i]<0) {
                result[negIndex] = nums[i];
                negIndex += 2;
            } else {
                result[posIndex] = nums[i];
                posIndex +=2;
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1,2,-4,-5};
    Solution sol;
    vector<int> ans = sol.rearrangeBySign(nums);
    for(int num : ans) {
        cout << num << " ";
    }
    return 0;
}