#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> scores(n);
    for (double &x: scores) {
        cin >> x;
    }

    sort(begin(scores), end(scores), greater<double>());
    cout << fixed << setprecision(2);
    for (double x: scores) {
        cout << x << " ";
    }
}