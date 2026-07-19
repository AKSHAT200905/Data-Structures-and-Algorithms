#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void accessChars(string s) {
        for (int i=0;i<s.length();i++) {
            cout << s[i] << " ";
        }
    }
};

int main() {
    Solution obj;
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    obj.accessChars(s);
    return 0;
}