// https://codeforces.com/problemset/problem/2110/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    // find position of )(, find balance at either end
    if (s.front() == ')' || s.back() == '(') {
        if (s.find(")(") != string::npos) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    } 
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}