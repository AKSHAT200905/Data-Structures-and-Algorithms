#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxProductSubArray(vector<int>& nums) {
        int n = nums.size();
        int pref=1,suff=1;
        int result=INT_MIN;
        for(int i=0;i<n;i++) {
            if(pref==0) pref=1;
            if(suff==0) suff=1;
            pref *= nums[i];
            suff *= nums[n-i-1];
            result = max(result,max(suff,pref));
        }
        return result;
    }
};

int main() {
    vector<int> nums={2,3,-2,4};
    Solution sol;
    cout<< sol.maxProductSubArray(nums) <<endl;
    return 0;
}