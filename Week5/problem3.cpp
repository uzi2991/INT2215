#include <iostream>
#include <vector>

struct Student {

    int rollNo, age, marks;
    string name, address;
};

int main() {
    Student st[15];
    int count = 1;

    for (int i = 0; i < 15; ++i) {
        st[i].rollNo = count++;

        cin >> st[i].name >> st[i].age >> st[i].address >> st[i].marks;
    }

    for (int i = 0; i < 15; ++i) {
        cout << st[i].name << " " << st[i].age << " " << st[i].address << " " << st[i].marks << "\n";
    }
}
