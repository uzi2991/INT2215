#include <iostream>

int main() {
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;

    cout << (number1 == number2 && number2 == number3 ? "true" : "false");
}