#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    long long PascalElement(int r,int c) {
        int n = r-1;
        int k=c-1;
        long long result =1;
        for(int i=0;i<k;i++) {
            result = result * (n-i);
            result = result/(i+1);
        }
        return result;
    }
};

int main() {
    Solution sol;
    int r,c;
    cout << "Enter r and c: ";
    cin >> r >> c;
    cout << sol.PascalElement(r,c);
    return 0;
}