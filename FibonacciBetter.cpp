#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n :";
    cin >> n;
    if (n==0) {
        cout << "Fibonacci Series up to " << n << "th term: " << 0;
    } else {
        int secondLast=0;
        int last=1;
        cout << "Fibonacci Series upto " << n << "th term: " << endl;
        cout << secondLast << " " << last << " ";

        int current;
        for(int i=2;i<=n;i++) {
            current = secondLast + last;
            secondLast = last;
            last = current;
            cout <<  current << " ";
        }
    }
    return 0;
}