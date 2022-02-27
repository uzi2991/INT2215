#include <iostream>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    int wordCount = 0;
    for (int i = 0; i < line.size(); ++i) {
        if (line[i] != ' ' && (i == 0 || line[i - 1] == ' ')) {
            ++wordCount;
        }
    }

    cout << wordCount;
}