struct Employee {
    string name;
    int salary;
    int hourPerDay;
};

vector<Employee> em;

void increase() {
    for (const auto& e: em) {
        if (e.hourPerDay >= 12) {
            e.salary += 150;
        } else if (e.hourPerDay >= 10) {
            e.salary += 100;
        } else if (e.hourPerDay >= 8) {
            e.salary += 50;
        }

    }
}
