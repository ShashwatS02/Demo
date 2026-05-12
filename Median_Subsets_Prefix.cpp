#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <functional>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    set<int> total_medians_found;
    
    for (int i = 0; i < n; ++i) {
        
        priority_queue<int> lo; 
        priority_queue<int, vector<int>, greater<int>> hi; 

        for (int j = i; j >= 0; --j) {
            
            int val = p[j];

            
            if (lo.empty() || val <= lo.top()) {
                lo.push(val);
            } else {
                hi.push(val);
            }

            
            if (lo.size() > hi.size() + 1) {
                hi.push(lo.top());
                lo.pop();
            } else if (hi.size() > lo.size()) {
                lo.push(hi.top());
                hi.pop();
            }

            
            if ((i - j + 1) > 1) {
                
                total_medians_found.insert(lo.top());
            }
        }
        cout << total_medians_found.size() << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}