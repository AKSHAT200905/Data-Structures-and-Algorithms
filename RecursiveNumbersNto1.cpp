#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printNumbersNto1(int current) {
        if (current < 1) {
            return;
        }
        printNumbersNto1(current-1);
        cout<< current << "\n";
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    sol.printNumbersNto1(n);
    cout << "\n";
    return 0;
}