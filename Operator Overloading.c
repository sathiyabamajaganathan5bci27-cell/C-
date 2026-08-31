#include <iostream>

class Complex {
public:
    int r, i;
    Complex(int real = 0, int imag = 0) : r(real), i(imag) {}
    Complex operator + (const Complex& obj) {
        return Complex(r + obj.r, i + obj.i);
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    std::cout << "Real parts sum: " << c3.r << "\n";
    return 0;
}
