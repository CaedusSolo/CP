#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int uc = 0;
    int lc = 0;

    for (char c : s) {
        if ((int)c >= 65 && (int)c <= 90) {
            uc++;
        }
        else lc++;
    }

    if (uc > lc) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s;

    return 0;
}