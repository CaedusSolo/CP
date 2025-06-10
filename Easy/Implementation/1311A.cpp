#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int moves = 0;
    // obtain b from a
    // change a
    // add odd, subtract even
    // if b > a:
    // b - 1 = a num moves = 1 (add 1)
    // b - 2 = a num moves = 2 (add 1 2 times)
    // b - 3 = a num moves = 1 (add 3)
    // b - 4 = a num moves = 2 (add 3, add 1)
    // else if a > b:
    // a - 1 = b num moves = 2 (subtract 2 add 1)
    // a - 2 = b num moves = 1 (subtract 2)
    // a - 3 = b num moves = 2 (subtract 4 add 1)
    if (a == b)
        cout << 0 << "\n";
    else
    {
        if (b > a)
        {

            if ((b - a) % 2 != 0)
            {
                moves++;
            }
            else
            {
                moves += 2;
            }
        }
        else {
            if ((a-b) % 2 != 0) {
                moves += 2;
            }
            else {
                moves++;
            }
        }
        cout << moves << "\n";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}