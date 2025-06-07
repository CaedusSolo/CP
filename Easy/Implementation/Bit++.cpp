// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;

        if (input.find("++") != input.npos) sum++;
        else sum--;
    }

    cout << sum;

    return 0;
}