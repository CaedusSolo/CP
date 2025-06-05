// https://codeforces.com/problemset/problem/1742/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    ll arr[n];
    unordered_map<int, ll> freq;
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int num : arr) {
        freq[num]++;
    }
    bool ok = true;
    for (auto pair : freq) {
        if (pair.second > 1) {
            ok = false;
            break;
        }
    }
    if (ok) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}