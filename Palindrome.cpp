#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n) {
    int rev =0;
    int dup = n;
    while (n>0) {
        int lastDigit = n%10;
        rev = (rev*10) + lastDigit;
        n = n/10;
    }
    if(dup == rev) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if(palindrome(n)) {
        cout << n << " is a palindrome" << endl;
    } else {
        cout << n << " is not a palindrome."<< endl;
    }
    return 0;
}