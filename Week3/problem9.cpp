#include <iostream>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    int i = 0;
    while (i < line.size() && line[i] == ' ') {
        cout << ' ';
        ++i;
    }

    while (i < line.size()) {
        if (line[i] != ' ') {
            cout << line[i];
            ++i;
        } else {
            cout << ' ';
            while (i < line.size() && line[i] == ' ') {
                ++i;
            }
        }
    }
}