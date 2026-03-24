#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s;
    int len = s.size();
    string pat = "Yes";
    int pos = -1;
    for (int k = 0; k < 3; ++k) {
        if (s[0] == pat[k]) {
            pos = k;
            break;
        }
    }
    if (pos == -1) {
        cout << "NO\n";
        return;
    }
    bool ok = true;
    for (int idx = 0; idx < len; ++idx) {
        if (s[idx] != pat[pos % 3]) {
            ok = false;
            break;
        }
        ++pos;
    }
    cout << (ok ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cases;
    cin >> cases;
    while (cases--) {
        solve();
    }
    return 0;
}
