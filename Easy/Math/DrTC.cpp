#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt1 = count(s.begin(), s.end(), '1');
    int total = (n - cnt1) * (cnt1 + 1) + cnt1 * (cnt1 - 1);

    cout << total << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
