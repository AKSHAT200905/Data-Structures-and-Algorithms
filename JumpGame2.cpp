#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0, currentEnd = 0, farthest = 0;
        for(int i = 0; i < n - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            if(i == currentEnd) {
                jumps++;
                currentEnd = farthest;
            }
        }
        return jumps;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2,3,1,1,4};
    int minJumps = sol.jump(nums);
    cout << "Minimum number of jumps to reach the last index: " << minJumps << endl;
}