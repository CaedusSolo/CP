#include <bits/stdc++.h>
using namespace std;

int main() {
    string gn, rh, w;

    cin >> gn;
    cin >> rh;
    cin >> w;

    int ta[26] = {0};
    int wa[26] = {0};

    for (char c : gn) {
        ta[c - 'A']++;
    }

    for (char c : rh) {
        ta[c - 'A']++;
    }

    for (char c : w) {
        wa[c - 'A']++;
    }

    bool ok = true;
    for (int i = 0; i < 26; i++) {
        if (ta[i] != wa[i]) {
            ok = false;
            break;
        }
    }

    string r = (ok) ? "YES" : "NO";

    cout << r;

    return 0;
}