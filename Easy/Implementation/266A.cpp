// https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (v[i] == v[i+1]) {
            count++;
        }
    }
    cout << count;

    return 0;
}