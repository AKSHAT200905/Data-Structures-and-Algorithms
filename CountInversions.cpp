#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>& nums,int low,int mid,int high) {
    vector<int> temp;
    int left=low;
    int right = mid+1;
    int count=0;
    while(left<=mid && right<=high) {
        if(nums[left] <= nums[right]) {
            temp.push_back(nums[left]);
            left++;
        } else {
            temp.push_back(nums[right]);
            count += (mid-left+1);
            right++;
        }
    }
    while(left<=mid) {
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high) {
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low;i<=high;i++) {
       nums[i] = temp[i-low]; 
    }
    return count;
}

int mergeSort(vector<int>& nums,int low,int high) {
    int count=0;
    if(low>=high) return count;
    int mid = (low+high)/2;
    count += mergeSort(nums,low,mid);
    count += mergeSort(nums,mid+1,high);
    count += merge(nums,low,mid,high);
    return count;
}

int numberOfInversions(vector<int>& nums,int n) {
    return mergeSort(nums,0,n-1);
}

int main() {
    vector<int> nums = {5,4,3,2,1};
    int n = nums.size();
    int count = numberOfInversions(nums,n);
    cout << "The number of Inversions are: " << count <<endl;
    return 0;
}