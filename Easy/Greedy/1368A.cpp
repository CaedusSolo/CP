// https://codeforces.com/problemset/problem/1368/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll a, b, n;
    cin >> a >> b >> n;
    int steps = 0;
    // find smaller number
    // add larger number to it
    // eg n = 100, a = 5, b = 4 

    while (max(a, b) <= n) {
        if (a < b) a += b;
        else b += a;
        steps++;
    }
    
    cout << steps << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}