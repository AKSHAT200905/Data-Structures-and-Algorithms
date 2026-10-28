#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int reverseNumber(int n) {
        int rev = 0;
        while(n > 0) {
            int num  = n%10;
            rev = rev *10 + num;
            n = n/10;
        }
        return rev;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number " << n << " is now reversed to " << obj.reverseNumber(n) << endl;
    return 0;
}