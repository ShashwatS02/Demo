#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y; cin >> x >> y;
    if (__gcd(x, y) == 1) {
        cout << 1 << '\n' << x << ' ' << y << '\n';
    } else {
        cout << 2 << '\n';
        cout << x - 1 << ' ' << x << '\n';
        cout << x << ' ' << y << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
