// https://codeforces.com/problemset/problem/1927/A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int bcount = count(s.begin(), s.end(), 'B');
    int length = 0;
    int bc = 0;
    
    for (char c : s)
    {
        if (c == 'B')
        {
            bc++;
        }
        if (bc >= 1)
            length++;
        if (bc == bcount)
            break;
    }
    cout << length << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}