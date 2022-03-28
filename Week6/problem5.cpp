#include <iostream>

using namespace std;

class  Area {
private:
    int length, breadth;

public:
    Area(int length, int breadth): length(length), breadth(breadth) {}

    int returnArea() const {
        return this->length * this->breadth / 2;
    }
};

int main() {
    int length, breadth;

    cin >> length >> breadth;

    Area* area = new Area(length, breadth);

    cout << area->returnArea();

    delete area;
}
