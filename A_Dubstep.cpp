#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, res;
    cin >> s;
    for (int i = 0; i < (int)s.size();) {
        if (i + 2 < (int)s.size() && s.substr(i, 3) == "WUB") {
            if (!res.empty() && res.back() != ' ') res.push_back(' ');
            i += 3;
        } else {
            res.push_back(s[i++]);
        }
    }
    if (!res.empty() && res.back() == ' ') res.pop_back();
    cout << res << '\n';
}
