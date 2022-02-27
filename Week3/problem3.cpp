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

    for (int i = 0; i < n; ++i) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            cout << arr[i] << " ";
        }
    }
}