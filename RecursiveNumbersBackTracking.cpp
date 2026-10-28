#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printNumbersBacktracking(int current,int n) {
        if (current > n) {
            return;
        }
        
        printNumbersBacktracking(current+1,n);
        cout << current << " ";
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    sol.printNumbersBacktracking(1,n);
    cout << "\n";
    return 0;
}   