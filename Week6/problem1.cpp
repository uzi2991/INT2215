#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    d %= n;

    rotate(arr.begin(), arr.begin() + d, arr.end());

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

