// https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix(5, vector<int>(5));
    int r = 0;
    int c = 0;

    for (int i = 0; i < 5; i++) { // height 
        for (int j = 0; j < 5; j++) { // width
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                r = i;
                c = j;
            }
        }
    }

    int ans = abs(r - 2) + abs(c - 2);
    cout << ans;

    return 0;
}