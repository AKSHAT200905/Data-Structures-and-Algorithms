#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cout << "Enter lowercase string: ";
    cin >> s1;
    int hash1[26] = {0};
    for(int i = 0; i < s1.size(); i++) {
        hash1[s1[i] - 'a']++;
    }
    int query1;
    
    cout << "\nEnter query for lowercase characters: ";
    cin >> query1;
    while(query1--) {
        char c;
        cin >> c;
        cout << hash1[c - 'a'] << endl;
    }

    string s2;
    cout << "\nEnter uppercase string: ";
    cin >> s2;
    int hash2[26] = {0};
    for(int i = 0; i < s2.size(); i++) {
        hash2[s2[i] - 'A']++;
    }
    int query2;
    cout << "\nEnter query for uppercase characters: ";
    cin >> query2;
    while(query2--) {
        char c;
        cin >> c;
        cout << hash2[c - 'A'] << endl;
    }
    return 0;
}