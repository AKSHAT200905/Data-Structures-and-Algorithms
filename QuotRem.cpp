#include<iostream>
using namespace std;
int main() {
    int dividend,divisor;
    cout << "Enter Dividend: ";
    cin >> dividend;
    cout << "Enter Divisor: ";
    cin >> divisor;
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl; 
     return 0;
}
