#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int longestConsecutive(vector<int> &nums) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int lastSmaller = INT_MIN;
        int count=0;
        int longest=1;
        for(int i=0;i<n;i++) {
            if(nums[i]-1 == lastSmaller) {
                count++;
                lastSmaller = nums[i];
            } else if(nums[i]!=lastSmaller) {
                count=1;
                lastSmaller = nums[i];
            }
            longest = max(longest,count);
        }
        return longest;
    }
};
int main() {
    vector<int> arr = {100,4,200,1,3,2};
    Solution sol;
    int ans = sol.longestConsecutive(arr);
    cout << "The longest consecutive sequence is: " << ans << "\n";
    return 0;
}