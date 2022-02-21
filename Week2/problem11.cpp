#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() { 
    int n;
    cin >> n;

    vector<double> arr(n);
    double sum = 0;
    for (double &x: arr) {
        cin >> x;
        sum += x;
    }

    double mean = sum / n;
    double var = 0;

    for (double x: arr) {
        var += (x - mean) * (x - mean);
    }
    var /= n;

    cout << fixed << setprecision(2) << var;
}