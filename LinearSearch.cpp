#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int element) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int element, n, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: " << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> element;

    int index = linearSearch(arr, n, element);

    if(index != -1) {                   
        cout << element << " is found at index " << index << endl;  
    } else {
        cout << element << " not found." << endl;
    }
    return 0;
}