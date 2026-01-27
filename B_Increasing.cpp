#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

/**
 * Logic: Checks if all elements in the array are unique.
 * Optimization: Uses an unordered_set to track seen elements and 
 * short-circuits immediately if a duplicate is found.
 */
void execute_uniqueness_check() {
    int n;
    if (!(cin >> n)) return;

    unordered_set<int> seen_elements;
    bool has_duplicate = false;

    for (int i = 0; i < n; ++i) {
        int current_val;
        cin >> current_val;

        // If a duplicate is found, we can stop checking, but must finish reading input
        if (!has_duplicate) {
            if (seen_elements.find(current_val) != seen_elements.end()) {
                has_duplicate = true;
            } else {
                seen_elements.insert(current_val);
            }
        }
    }

    if (has_duplicate) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }
}

int main() {
    // Fast I/O optimization for high-volume test cases
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    if (!(cin >> test_cases)) return 0;

    while (test_cases--) {
        execute_uniqueness_check();
    }

    return 0;
}