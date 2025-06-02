#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int s = 0;
    for (s = 0; s < n; s++) {
        if ((a[0] + a[n-s-1] % 2 == 0) || (a[s] + a[n-1]) % 2 == 0) {
            break;
        }
    }
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}