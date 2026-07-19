#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int findduplicates(vector<int>& nums) {
        int slow= nums[0];
        int fast= nums[0];
        do {
            slow= nums[slow];
            fast= nums[nums[fast]];
        } while(slow!=fast);
        fast=nums[0];
        while(slow!=fast) {
            slow= nums[slow];
            fast= nums[fast];
        }
        return slow;
    }  
};
int main() {
    Solution obj;
    vector<int> nums = {1,3,4,2,2};
    int duplicate = obj.findduplicates(nums);
    cout << "The duplicate number in the array is: " << duplicate << endl;
    return 0;
}