#include <bits/stdc++.h>
using namespace std;
void generate(int n, string curr, vector<string>& result) {
    if (curr.length() == n) {
        result.push_back(curr);
        return;
    }
    generate(n, curr + "0", result);
    if (curr.empty() == true || curr.back() != '1') {
        generate(n, curr + "1", result);
    }
}
int main() {
    int n = 3;
    vector<string> result;
    generate(n, "", result);
    for (int i = 0; i < result.size(); i = i + 1) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}