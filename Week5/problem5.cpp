#include <iostream>

using namespace std;

struct Marks {
    int rollNo;
    string name;
    int chem_marks, maths_marks, phy_marks;

    float calculatePercent() const {
        return (chem_marks + maths_marks + phy_marks) / 300.f;
    }
};

