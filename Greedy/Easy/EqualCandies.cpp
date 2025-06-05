// https://codeforces.com/problemset/problem/1676/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int cs[n];

    for (int i = 0; i < n; ++i) {
        cin >> cs[i];
    }

    sort(cs, cs + n);
    int mn = cs[0];
    int sum = 0;

    for (int c : cs) {
        if (mn < c) {
            sum += abs(mn - c);
        }
    }

    cout << sum << "\n";

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}