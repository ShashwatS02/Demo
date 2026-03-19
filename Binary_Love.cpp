#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int n; 
        string s;
        cin >> n >> s;
        int trans = 0;
        for (int i = 0; i + 1 < n; ++i) {
            if (s[i] != s[i+1]) ++trans;
        }
        cout << (trans >= 2 ? "Alice" : "Bob") << '\n';
    }
    return 0;
}
