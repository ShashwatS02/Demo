#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve_problem() {
    int collection_size;
    cin >> collection_size;

    vector<bool> present(101, false);
    bool has_zero_element = false;

    for (int i = 0; i < collection_size; ++i) {
        int current_val;
        cin >> current_val;
        if (current_val != 0) {
            present[current_val] = true;
        } else {
            has_zero_element = true;
        }
    }

    int distinct_positive_count = 0;
    for (int val = 1; val <= 100; ++val) {
        if (present[val]) {
            distinct_positive_count++;
        }
    }

    if (distinct_positive_count == 0) {
        cout << 0 << "\n";
        return;
    }

    int num_increases = distinct_positive_count;
    int num_smashes = distinct_positive_count;

    if (!has_zero_element) {
        num_smashes--;
    }
    
    cout << num_increases + num_smashes << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases > 0) {
        solve_problem();
        num_test_cases--;
    }

    return 0;
}