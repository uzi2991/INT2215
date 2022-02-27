#include <iostream>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    for (int i = 0; i < line.size();) {
        if (i > line.size() - 4 || line.substr(i, 4) != "Zues") {
            cout << line[i];
            ++i;
        } else {
            cout << "Zeus";
            i += 4;
        }
    }
}