// https://codeforces.com/problemset/problem/1850/A
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int abc[3];
    int n = 0;
    while (n < 3) {
        cin >> abc[n];
        ++n;
    }

    sort(abc, abc+3);

    if (abc[1] + abc[2] < 10) cout << "NO";
    else cout << "YES";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }


    return 0;
}