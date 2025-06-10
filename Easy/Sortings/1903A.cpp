// https://codeforces.com/problemset/problem/1903/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    // k = max length of reversed subarray

    vector<ll> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    // nondecreasing sort (increasing)
    sort(vec.begin(), vec.end());



}

int main() {
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}