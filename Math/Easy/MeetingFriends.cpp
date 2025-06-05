// https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x[3];
    int n = 0;
    while (n < 3) {
        cin >> x[n];
        ++n;
    }

    int d = 0;
    sort(x, x + 3);
    int mp = x[1];

    d += abs(x[0] - mp);
    d += abs(x[2] - mp);

    // minimum total distance
    cout << d;

    return 0;
}