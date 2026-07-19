#include <bits/stdc++.h>
using namespace std;

int fibonacci(int N) {
    if (N <= 1) {
        return N;
    }
    int last = fibonacci(N - 1);   
    int slast = fibonacci(N - 2);  

    return last + slast;
}

int main() {
    int N = 4;
    for (int i = 0; i <= N; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
