#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
int main() {
    Solution sol;
    vector<int> nums= {0,1,2,2,3,0,4,2};
    int val=2;
    int newLength=sol.removeElement(nums,val);
    cout<<"The new length of the array after removing "<<val<<" is: "<<newLength<<endl;
    cout<<"The modified array is: ";
    for(int i=0;i<newLength;i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}