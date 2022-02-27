#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> arr(n);
    for (double &i : arr) {
        cin >> i;
    }

    double x;
    cin >> x;

    arr.push_back(0);
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] <= x) {
            arr[i + 1] = x;
            break;
        } else {
            arr[i + 1] = arr[i];
        }
    }

    if (arr[0] > x) {
        arr[0] = x;
    }

    cout << fixed << setprecision(2);
    for (double i: arr) {
        cout << i << " ";
    }
}