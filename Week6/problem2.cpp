#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    unordered_map<int, int> counts;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        ++counts[x];
    }

    for (const auto& it: counts) {
        if (it.second == 1) {
            cout << it.first << " ";
        }
    }
}
