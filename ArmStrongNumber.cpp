#include<bits/stdc++.h>
using namespace std;

int myPow(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result;
}

bool isArmstrong(int num) {
    int k = to_string(num).length();
    int sum = 0;
    int n = num;
    while(n > 0) {
        int lastDigit = n % 10;
        sum += myPow(lastDigit, k);  
        n = n / 10;
    }
    return sum == num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;
    return 0;
}