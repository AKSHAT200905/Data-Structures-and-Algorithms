#include<iostream>
using namespace std;

int main() {
    cout << "Press 1 for Addition" << endl;
    cout << "Press 2 for Subtraction" << endl;
    cout << "Press 3 for Multiplication" << endl;
    cout << "Press 4 for Division" << endl;

    int choice;
    cout << "\nEnter the operation you want to do : ";
    cin >> choice;

    double a,b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    switch(choice) {
        case 1:
        cout << a << " + " << b << " = " << (a+b);
        break;

        case 2:
        cout << a << " - " << b << " = " << (a-b);
        break;

        case 3:
        cout << a << " * " << b << " = " << (a*b);
        break;

        case 4:
        cout << a << " / " << b << " = " << (a/b);
        break;

        default:
        cout << "No other choice found";
    }
    return 0;

}