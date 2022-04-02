#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int yearOfJoining;
    int salary;
    string address;

public:
    Employee(string name, int yearOfJoining, string address): name(name), yearOfJoining(yearOfJoining), address(address) {}

    string getName() const {
        return this->name;
    }

    int getYearOfJoining() const {
        return this->yearOfJoining;
    }

    string getAddress() const {
        return this->address;
    }
};
