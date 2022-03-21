struct Account {
    string name;
    int number, balance;
};

vector<Account> accounts;

void printLessThan200() {
    for (const auto& account: accounts) {
        if (account.balance < 200) {
            cout << account.name << "\n";
        }
    }
}

void addBalance() {
    for (const auto& account: accounts) {
        if (account.balance > 1000) {
            cout << (account.balance += 100) << "\n";
        }
    }
}
