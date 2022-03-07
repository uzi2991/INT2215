void printArrow(int n, bool left) {
    if (left) {
        for (int i = n; i >= 1; --i) {
            cout << string(i - 1, ' ') << string(i, '*') << endl;
        }

        for (int i = 2; i <= n; ++i) {
            cout << string(i - 1, ' ') << string(i, '*') << endl;
        }
    } else {
        for (int i = n; i >= 1; --i) {
            cout << string(2 * n - 2 * i, ' ') << string(i, '*') << endl;
        }

        for (int i = 2; i <= n; ++i) {
            cout << string(2 * n - 2 * i, ' ') << string(i, '*') << endl;
        }
    }
}
