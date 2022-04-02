#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> counts;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        ++counts[x];
    }

    for (const auto& it: counts) {
        if (it.second > 1) {
            cout << it.first << " " << it.second << "\n";
        }
    }

}
