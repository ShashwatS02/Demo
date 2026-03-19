#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve_test_case() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long total_f_sum = (long long)n * (n + 1) / 2;

    
    const int BITS = 31;

    vector<vector<int>> prev_set(n, vector<int>(BITS, -1));
    for (int i = 0; i < n; ++i) {
        for (int b = 0; b < BITS; ++b) {
            if ((a[i] >> b) & 1) {
                prev_set[i][b] = i;
            } else if (i > 0) {
                prev_set[i][b] = prev_set[i - 1][b];
            }
        }
    }

    vector<vector<int>> next_set(n, vector<int>(BITS, n));
    for (int i = n - 1; i >= 0; --i) {
        for (int b = 0; b < BITS; ++b) {
            if ((a[i] >> b) & 1) {
                next_set[i][b] = i;
            } else if (i < n - 1) {
                next_set[i][b] = next_set[i + 1][b];
            }
        }
    }
    
    for (int i = 0; i < n - 1; ++i) {
        vector<pair<int, int>> right_boundaries;
        for (int b = 0; b < BITS; ++b) {
            right_boundaries.push_back({next_set[i + 1][b], prev_set[i][b]});
        }
        sort(right_boundaries.begin(), right_boundaries.end());

        long long sum_of_mins = (long long)(i + 1) * right_boundaries[0].first;
        int max_p_so_far = right_boundaries[0].second;

        for (size_t j = 1; j < right_boundaries.size(); ++j) {
            if (right_boundaries[j].first > right_boundaries[j-1].first) {
                long long num_valid_L = i - max_p_so_far;
                if(num_valid_L > 0) {
                   sum_of_mins += num_valid_L * (right_boundaries[j].first - right_boundaries[j-1].first);
                }
            }
            max_p_so_far = max(max_p_so_far, right_boundaries[j].second);
        }
        
        long long count_i = sum_of_mins - (long long)(i + 1) * (i + 1);
        total_f_sum += count_i;
    }

    cout << total_f_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve_test_case();
    }
    return 0;
}