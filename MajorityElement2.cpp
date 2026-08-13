#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement2(vector<int>& nums) {
        int n = nums.size();
        int count1=0,count2=0;
        int element1=INT_MIN,element2=INT_MIN;
        for(int i=0;i<n;i++) {
            if(count1==0 && element2 != nums[i]) {
                count1=1;
                element1=nums[i];
            } else if(count2==0 && element1 != nums[i]) {
                count2=1;
                element2=nums[i];
            } else if(element1 == nums[i]){
                count1++;
            } else if(element2 == nums[i]) {
                count2++;
            } else {
                count1--;
                count2--;
            }
        }
        count1=0,count2=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==element1) {
                count1++;
            } 
            if(nums[i]==element2) {
                count2++;
            }
        }
        int minimum=(n/3)+1;
        vector<int>result;
        if(count1>=minimum) {
            result.push_back(element1);
        } 
        if(count2>=minimum && element1 != element2) {
            result.push_back(element2);
        }
        return result;
    }
};

int main() {
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    Solution sol;
    vector<int> ans = sol.majorityElement2(arr);
    cout << "The majority elements are: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}