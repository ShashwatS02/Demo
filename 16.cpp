#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;

void solve_problem() {
    int size;
    cin >> size;
    set<int> distinct_values;
    bool has_zero_val = false;

    for (int i = 0; i < size; ++i) {
        int current_val;
        cin >> current_val;
        if (current_val != 0) {
            distinct_values.insert(current_val);
        } else {
            has_zero_val = true;
        }
    }

    int non_zero_uniques = distinct_values.size();

    if (non_zero_uniques == 0) {
        cout << 0 << endl;
        return;
    }

    int result;
    if (has_zero_val) {
        result = non_zero_uniques * 2;
    } else {
        result = non_zero_uniques * 2 - 1;
    }
    
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve_problem();
    }
    return 0;
}