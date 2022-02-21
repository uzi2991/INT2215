#include <iostream>

using namespace std;

int main() { 
    int total, totalLegs;
    cin >> total >> totalLegs;

    if (totalLegs % 2) {
        cout << "invalid";
        return 0;
    }

    int chicken = 2 * total - totalLegs/2;
    int dog = totalLegs/2- total;

    if (chicken < 0 || dog < 0) {
        cout << "invalid";
        return 0;
    }

    cout << "chicken = " << chicken << ", dog = " << dog;
}