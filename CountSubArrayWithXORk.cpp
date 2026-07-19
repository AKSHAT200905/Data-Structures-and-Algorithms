#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int countSubArrays(vector<int>& nums,int k) {
        unordered_map<int,int> frequency;
        frequency[0]=1;
        int prefixXOR = 0, count =0;
        for(int num: nums) {
            prefixXOR ^= num;
            int target = prefixXOR^k;
            if(frequency.find(target)!= frequency.end()) {
                count += frequency[target];
            }
            frequency[prefixXOR]++;
        }
        return count;
    }
};

int main() {
    vector<int> nums = {4,2,2,6,4};
    int k=6;
    Solution sol;
    cout << sol.countSubArrays(nums,k) << endl;
    return 0;
}