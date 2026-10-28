#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printName(string name,int count,int N) {
        if (count == N) {
            return;
        }
        cout << name << "\n";
        printName(name,count+1,N);
    }
};

int main() {
    Solution sol;
    int N;
    string name;
    cout << "Enter a name: ";
    cin >> name;
    cout << "\nEnter the count of name: ";
    cin >> N;
    sol.printName(name,0,N);
    return 0;
}