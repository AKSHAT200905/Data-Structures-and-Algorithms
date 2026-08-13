#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int element;
        for(int i=0;i<n;i++) {
            if(count==0) {
                count=1;
                element = nums[i];
            } else if(element == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==element) {
                count1++;
            }
        }
        if(count1 > n/2) {
            return element;
        }
        return -1;
    }
};

int main() {
    vector<int>arr = {2,2,1,1,1,2,2};
    Solution sol;
    int result = sol.majorityElement(arr);
    cout << "The majority element: " << result <<endl;
    return 0;
}