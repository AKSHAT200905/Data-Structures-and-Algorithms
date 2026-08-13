#include<bits/stdc++.h>
using namespace std;

class Solution  {
    public :
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxCount=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==1) {
                count++;
            } else {
                count=0;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums(n);                    
    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int maxCount = sol.findMaxConsecutiveOnes(nums); 
    cout << "Max Consecutive Ones: " << maxCount << endl;
    return 0;
}