#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string username;
    getline(cin, username);

    if (username.size() < 6 || username.size() > 15 || isdigit(username[0])) {
        cout << "Invalid username.";
        return 0;
    }

    if (all_of(begin(username), end(username), [](char &c) { return isalnum(c); })) {
        cout << "Valid username.";
    } else {
        cout << "Invalid username.";
    }
}
        