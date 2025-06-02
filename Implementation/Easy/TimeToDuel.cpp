// https://codeforces.com/problemset/problem/2109/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    auto c0 = find(a.begin(), a.end(), 0);
    auto c1 = find(a.begin(), a.end(), 1);

    bool valid = true;
    if (c0 == a.end() || c1 == a.end())
        cout << "YES" << endl;
    else
    {
        for (int j = 1; j < n - 1; j++)
        {
            int ce = a[j];

            if (ce == 0)
            {
                if (a[j - 1] != 1 || a[j + 1] != 1)
                {
                    cout << "YES" << endl;
                    valid = false;
                    break;
                }
            }
        }
        if (valid) {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}