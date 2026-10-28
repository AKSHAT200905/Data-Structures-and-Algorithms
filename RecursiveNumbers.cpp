#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printNumbers(int current,int n) {
        if (current>n) {
            return;
        }
        cout << current << "\n";
        printNumbers(current+1,n);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n:";
    cin >> n;
    sol.printNumbers(1,n);
    return 0; 
}