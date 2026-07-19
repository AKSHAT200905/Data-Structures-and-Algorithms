#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    if(num%2==0) {
        cout << "Even";
    }
    else if (num %2 ==1) {
        cout << "Odd";
    }
    else {
        cout << "Zero";
    }
    return 0;
}