#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    string res;
    res.push_back(s[0]);
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            res.push_back('*');
        }

        res.push_back(s[i]);
    }

    cout << res;
}
