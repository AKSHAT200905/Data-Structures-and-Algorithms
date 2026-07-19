#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach Time Complexity - O(d), d - number of digits
int countDigitsBruteForce(int n) {
    if (n==0) return 1;
    int count = 0;
    while (n>0) {
        n = n/10;
        count++;
    }
    return count;
}
//Optimal Force Approach Time Complexity - O(1)
int countDigitsOptimalForce(int n) {
    if (n==0) return 1;
    return floor(log10(n)) + 1;
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number " << n << " has " << countDigitsBruteForce(n) << " digits." << endl;
    cout << "The number " << n << " has " << countDigitsOptimalForce(n) << " digits." << endl;
    return 0;
}