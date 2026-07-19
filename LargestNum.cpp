#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter a,b,c : ";
    cin >> a >> b >> c;

    if(a>b && a>c) {
        cout << a << "is greater!!";
    }
    else if (a<b && b>c) {
        cout << b << "is greater!!";
    }
    else {
        cout << c << "is greater!!";
    }
    return 0;
}