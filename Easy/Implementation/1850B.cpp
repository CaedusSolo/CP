#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int max_quality = -1;
    int winner_index = -1;

    for (int i = 1; i <= n; ++i) {
        int a, b;
        cin >> a >> b;

        if (a <= 10 && b > max_quality) {
            max_quality = b;
            winner_index = i; 
        }
    }

    cout << winner_index << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
