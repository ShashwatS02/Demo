#include <bits/stdc++.h>
using namespace std;

void solve() {
    int len; cin >> len;
    string str; cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    string filtered;
    filtered.push_back(str[0]);
    for (int i = 1; i < len; i++) {
        if (str[i] != str[i-1]) filtered.push_back(str[i]);
    }

    cout << (filtered == "meow" ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}
