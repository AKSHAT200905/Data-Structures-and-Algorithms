#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> getDivisorsBrute(int n){
        vector<int> res;
        for(int i =1;i<=n;i++) {
            if(n%i==0) {
                res.push_back(i);
            }
        }
        return res;
    }
};

class Solution {
    public:
    vector<int> getDivisorsOptimal(int n) {
        vector<int> res;
        for(int i=1;i*i <=n;i++) {
            if(n%i==0) {
                res.push_back(i);
                if(i != n/i) {
                    res.push_back(n/i);
                }
            }
        }
        return res;
    }
};

int main() {
    Solution obj;
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    // vector<int> result = obj.getDivisorsBrute(n);
    vector<int> result = obj.getDivisorsOptimal(n);
    cout << "Divisors of " << n << ": ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}