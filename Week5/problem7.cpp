struct Student {
    int rollNo, age;
    string name, address;
};

vector<Student> st;

void printAge14() {
    for (const auto& it: st) {
        if (it.age == 14) {
            cout << it.name << "\n";
        }
    }
}

void printEvenRollNo() {
    for (const auto& it: st) {
        if (it.rollNo % 2) {
            cout << it.name << "\n";
        }
    }
}

void display(int rollNo) {
    for (const auto& it: st) {
        if (it.rollNo == rollNo) {
            cout << it.name << it.age << it.address << "\n";
        }
    }
}
