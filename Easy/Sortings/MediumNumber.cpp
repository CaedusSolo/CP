// https://codeforces.com/problemset/problem/1760/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int nums[3];
    for (int i = 0; i < 3; i++) cin >> nums[i];
    sort(nums, nums + 3);

    cout << nums[1] << "\n";
}

int main() {
    int t, a, b, c;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}