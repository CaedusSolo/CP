#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq(s.size());

    for (char c : s) {
        freq[c - 'a']++;
    }

    if (freq.size() % 2 != 0) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}