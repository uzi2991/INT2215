#include <iostream>

using namespace std;

int main() { 
    int n;
    cin >> n;

    for (int r = 1; r <= 2 * n + 1; ++r) {
        for (int c = 1; c <= 2 * n + 1; ++c) {
            if (r - c == 0 || r + c == 2 * n + 2) {
                cout << "* ";
            } else {
                cout << ". ";
            }
        }

        cout << "\n";
    }
}