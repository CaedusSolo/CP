#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int minimum = INT_MAX;
    for (int i = 1; i <= 10; i++) {
        int x1m = abs(x1 - i);
        int x2m = abs(x2 - i);
        int x3m = abs(x3 - i);

        int total = x1m + x2m + x3m;

        if (total < minimum) {
            minimum = total;
        }
    }
    cout << minimum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}