#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    int n;
    cin >> n;

    for (int x = -n; x <= n; ++x) {
        for (int y = -n; y <= n; ++y) {
            if (abs(x) + abs(y) <= n) {
                cout << "* ";
            } else {
                cout << ". ";
            }
            
        }

        cout << "\n";
    }
}