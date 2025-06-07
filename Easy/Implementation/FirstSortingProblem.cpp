// https://codeforces.com/problemset/problem/1971/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    int minimum = min(x, y);
    int maximum = max(x, y);
    cout << minimum << " " << maximum << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}