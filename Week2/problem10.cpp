#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() { 
    int n;
    cin >> n;

    vector<double> a(n), b(n);
    for (double &x: a) {
        cin >> x;
    }
    for (double &x: b) {
        cin >> x;
    }

    double product = 0;
    for (int i = 0; i < n; ++i) {
        product += a[i] * b[i];
    }

    cout << fixed << setprecision(2) << product;
}