#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> input(n);

    for (int i = 0; i < n; i++) cin >> input[i];
    auto fcPosIt = find(input.begin(), input.end(), 1);
    auto lcPosIt = find(input.rbegin(), input.rend(), 1);
    int fcPos = fcPosIt - input.begin();
    int lcPos = input.rend() - lcPosIt - 1;

    // at first occurrence of closed door use the button
    // find last occurrence of closed door
    // if last occurrence - first occurrence > x 
    // yes
    if (fcPos == lcPos) cout << "YES\n";
    else {
        if (abs(lcPos - fcPos) < x) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}