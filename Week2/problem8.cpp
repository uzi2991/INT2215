#include <iostream>

using namespace std;

int main() { 
    long long n;
    cin >> n;

    n = abs(n);

    int count = 1;
    while (n >= 10) {
        n /= 10;
        count += 1;
    }

    cout << count;
}