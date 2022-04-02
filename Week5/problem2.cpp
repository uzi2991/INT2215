#include <vector>

struct Student {

    int rollNo, age;
    string name;
};


int main() {
    Student st[5];
    int count = 1;

    for (int i = 0; i < 5; ++i) {
        st[i].rollNo = count++;

        cin >> st[i].name >> st[i].age;
    }

    cout << st[1].name << " " << st[1].age;
}
