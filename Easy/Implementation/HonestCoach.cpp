// https://codeforces.com/problemset/problem/1360/B
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr, arr + n);

    if (n == 2) {
        cout << abs(arr[0] - arr[1]) << "\n";
    }

    else {

        int mindiff = INT_MAX;
        for (int s = 0; s < n - 1; ++s) {
            mindiff = min(abs(arr[s] - arr[s+1]), mindiff);
        }

        cout << mindiff << "\n";
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}