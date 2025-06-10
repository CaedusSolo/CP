// https://codeforces.com/problemset/problem/2086/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    // num of jars
    ll n;
    cin >> n;
    
    // 1 jar = 3 kg
    // find num of berries needed (kg)
    // 2 kg berries needed / jar
    ll b = n * 2;
    cout << b << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}