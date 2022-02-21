#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() { 
    int n;
    cin >> n;

    vector<double> arr(n);
    for (double &x: arr) {
        cin >> x;
    }

    cout << fixed << setprecision(2);

    for (int i = arr.size() - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
}