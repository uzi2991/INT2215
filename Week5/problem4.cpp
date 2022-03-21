#include <iostream>

using namespace std;

struct Distance {
    float value;
};

Distance add(const Distance& x, const Distance& y) {
    return Distance{x.value + y.value};
}

int main() {
}
