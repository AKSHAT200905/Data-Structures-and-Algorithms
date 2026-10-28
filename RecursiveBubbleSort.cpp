#include <bits/stdc++.h>
using namespace std;

void bubble_sortBrute(int arr[], int n) {
    if (n == 1) return;
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    bubble_sortBrute(arr, n - 1);
}

void bubble_sortOptimal(int arr[], int n) {
    if (n == 1) return;
    int flag = 0; 
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            flag = 1; 
        }
    }
    if (flag == 0) return;
    bubble_sortOptimal(arr, n - 1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    bubble_sortBrute(arr, n);
    bubble_sortOptimal(arr, n);
    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
