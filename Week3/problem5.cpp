#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x: arr) {
        cin >> x;
    }

    for (int l = 0, r = n - 1; l < r; ++l, --r) {
        if (arr[l] != arr[r]) {
            cout << "Asymmetric array.";
            return 0;
        }
    }

    cout << "Symmetric array.";
}