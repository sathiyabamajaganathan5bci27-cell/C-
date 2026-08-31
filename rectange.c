#include <iostream>

using namespace std;

// Base class
class Rectangle {
protected:
    int width;
    int height;

public:
    // Prints the width and height separated by a space
    void display() {
        cout << width << " " << height << "\n";
    }
};

// Derived class
class RectangleArea : public Rectangle {
public:
    // Reads width and height from standard input
    void read_input() {
        cin >> width >> height;
    }

    // Overloads/Overrides the display method to output the calculated area
    void display() {
        cout << (width * height) << "\n";
    }
};
