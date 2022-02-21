#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() { 
    int x;
    cin >> x;

    double sum = 1, oldSum = 0, prod = 1;
    int i = 1;
    while (sum - oldSum > 0.001) {
        oldSum = sum;
        prod *= 1.0 *x / i;
        sum += prod;
        ++i;
    }

    cout << fixed << setprecision(4) << sum;
}