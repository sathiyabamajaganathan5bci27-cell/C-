#include <iostream>

using namespace std;

class Box {
private:
    int l, b, h;

public:
    // Default constructor
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }

    // Parameterized constructor
    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
    }

    // Copy constructor
    Box(const Box& B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    // Getter functions
    int getLength() {
        return l;
    }

    int getBreadth() {
        return b;
    }

    int getHeight() {
        return h;
    }

    // Calculate volume (using long long to prevent integer overflow)
    long long CalculateVolume() {
        return (long long)l * b * h;
    }

    // Overloading < operator
    bool operator<(const Box& B) {
        if (l < B.l) {
            return true;
        }
        if (b < B.b && l == B.l) {
            return true;
        }
        if (h < B.h && b == B.b && l == B.l) {
            return true;
        }
        return false;
    }

    // Overloading << operator as a friend function
    friend ostream& operator<<(ostream& out, const Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};
