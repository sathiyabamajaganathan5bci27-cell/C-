#include <iostream>

class AreaCalculator {
public:
    double area(double radius) { return 3.14159 * radius * radius; }
    double area(double l, double b) { return l * b; }
};

int main() {
    AreaCalculator calc;
    std::cout << "Circle Area: " << calc.area(5.0) << "\n";
    return 0;
}
