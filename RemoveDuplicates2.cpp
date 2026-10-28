#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int removeDuplicates2(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return n;
        int i=2;
        for(int j=2;j<n;j++){
            if(nums[j]!=nums[i-2]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,1,1,2,2,3};
    int newLength = sol.removeDuplicates2(nums);
    cout << "New length after removing duplicates: " << newLength << endl;
    cout << "Modified array: ";
    for(int i=0; i<newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}