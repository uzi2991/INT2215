#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;

    int lower = ceil(sqrt(lowerBound)), upper = sqrt(upperBound);
    
    for (int i = lower; i <= upper; ++i) {
        cout << i * i << ' ';
    }
}