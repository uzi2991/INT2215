#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int roll_no;

public:
    Student(string name, int roll_no): name(name), roll_no(roll_no) {}

    string getName() const {
        return this->name;
    }

    int getRollNo() const {
        return this->roll_no;
    }
};
