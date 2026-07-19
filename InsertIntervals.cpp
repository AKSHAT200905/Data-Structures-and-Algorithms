#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int n = intervals.size();
        int i = 0;
        while(i<n && intervals[i][1]<newInterval[0]) {
            result.push_back(intervals[i]);
            i++;
        }
        while(i<n && intervals[i][0]<=newInterval[1]) {
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
            i++;
        }
        result.push_back(newInterval);
        while(i<n) {
            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }    
};
int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int> newInterval = {4,8};
    vector<vector<int>> result = sol.insert(intervals, newInterval); 
    cout << "[";
    for (int i = 0; i < result.size(); i++) {        
        cout << "[" << result[i][0] << "," << result[i][1] << "]";
        if (i != result.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0;
}