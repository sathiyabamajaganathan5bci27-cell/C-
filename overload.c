#include <iostream>

using namespace std;

class Complex {
public:
    int a, b;
};

// Overload the + operator to perform complex addition
Complex operator+(const Complex& lhs, const Complex& rhs) {
    Complex result;
    result.a = lhs.a + rhs.a; // Add the real parts
    result.b = lhs.b + rhs.b; // Add the imaginary parts
    return result;
}

// Overload the << operator to format the output stream as "a+ib"
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.a << "+i" << c.b;
    return out;
}
