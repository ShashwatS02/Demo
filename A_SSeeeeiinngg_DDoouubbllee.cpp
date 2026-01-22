#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define nl cout << "\n"
#define print(i) cout << i << endl

const int Mod = 1e9 + 7;

void solve() {
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    cout << s << t << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
