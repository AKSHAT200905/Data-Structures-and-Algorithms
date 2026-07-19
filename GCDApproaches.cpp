#include<bits/stdc++.h>
using namespace std;

int GCDBruteForce(int a, int b) {
    int gcd = 1;
    for(int i =1;i<=min(a,b);i++) {
        if(a%i==0 && b%i==0) {
            gcd = i;
        }
    }
    return gcd;
}

int GCDBetterForce(int a ,int b) {
    for(int i = min(a,b);i>0;i--) {
        if(a%i==0 && b%i==0) {
            return i;
        }
    }
    return 1;
}

int GCDOptimalForce(int a,int b) {
    while (a>0 && b > 0) {
        if(a>b) {
            a = a%b;
        }  else {
            b = b%a;
        }
    }
    if(a==0) {
        return b;
    } else return a;
}

int main() {
    int a,b;
    cout << "Enter two numbers a and b: ";
    cin >> a >> b;
    int result1 = GCDBruteForce(a,b);
    int result2 = GCDBetterForce(a,b);
    int result3 = GCDOptimalForce(a,b);
    cout << "The GCD of " << a << " and " << b << " is " << result3 <<endl;
    return 0;
}
