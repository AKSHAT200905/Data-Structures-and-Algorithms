#include<bits/stdc++.h>
using namespace std;
 class Solution {
    public:
    int maxSubArray(vector<int> & nums) {
        long long maximum = LLONG_MIN;
        long long sum=0;
        for(int i =0;i<nums.size();i++) {
            sum+=nums[i];
            if(sum>maximum) {
                maximum = sum; 
            }
            if (sum<0) {
                sum=0;
            }
        }
        return maximum;
    }
};

int main() {
    vector<int> arr = {-2,-1,3,6,4,-7,9,8,-4};
    Solution sol;
    int maxSum = sol.maxSubArray(arr);
    cout <<"The sum of maximum Sub Array is: " << maxSum <<endl;
    return 0;   
}