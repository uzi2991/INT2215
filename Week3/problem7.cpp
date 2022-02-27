#include <iostream>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    int alphaCount = 0, digitCount = 0, specialCount = 0;
    for (char c: line) {
        if (isalpha(c)) {
            ++alphaCount;
        } else if (isdigit(c)) {
            ++digitCount;
        } else {
            ++specialCount;
        }
    }

    cout << alphaCount << ' ' << digitCount << ' ' << specialCount;
}