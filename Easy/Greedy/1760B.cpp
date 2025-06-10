// https://codeforces.com/problemset/problem/1760/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> sz;
    for (int i = 0; i < n; i++) sz.push_back(s[i]);

    int maximum = 0;
    for (int i = 0; i < n; i++) {
        maximum = max(maximum, (sz[i] - 'a')+1);
    }
    cout << maximum << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}