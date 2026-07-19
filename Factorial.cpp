#include<bits/stdc++.h>
using namespace std;

int factorialIterative(int n) {
    int fact=1;
    for(int i=1;i<=n;i++) {
        fact = fact*i;
    }
    return fact;
}
int factorialRecursive(int n) {
    int fact=1;
    if(n==0) return 1;
    else return n * factorialRecursive(n-1);
}

int main() {
    int n;
    cout<< "Enter n: ";
    cin>>n;
    int result = factorialRecursive(n);
    cout << "Factorial of " << n << " is " << result << endl;
    return 0;
}