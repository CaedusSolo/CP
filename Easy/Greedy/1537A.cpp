// https://codeforces.com/problemset/problem/1537/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    ll sum = accumulate(a.begin(), a.end(), 0);
    int count = 0;

    if (sum > 1 && sum != n) {
        if (sum < n) {
            count = 1;
        }
        else {
            count = abs(sum - n);
        }
    }
    else if (sum <= 1 && sum != n) {
        count = 1;
    }
    else if (sum == n) {
        count = 0;
    }
    
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}