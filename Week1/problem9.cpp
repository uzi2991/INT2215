#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    double p = (a + b + c) * 1.0 / 2;
    if (p <= a || p <= b || p <= c) {
        cout << "invalid";
    } else {
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(2) << area;
    }
}