#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &x: a) {
        cin >> x;
    }
    for (int &x: b) {
        cin >> x;
    }

    cout << (a == b ? "YES" : "NO");
}