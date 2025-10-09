#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int v[] = {4,7,47,74,444,447,474,744,477,747,777};
    for(int x : v) if(n % x == 0) { cout << "YES\n"; return 0; }
    cout << "NO\n";
}
