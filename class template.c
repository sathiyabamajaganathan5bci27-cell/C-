#include <iostream>
#include <string>

using namespace std;

// Base class template for handling numeric types (int, float)
template <class T>
class AddElements {
private:
    T element;
public:
    AddElements(T arg) : element(arg) {}
    
    // Returns the sum of the two elements
    T add(T other) {
        return element + other;
    }
};

// Template specialization explicitly for handling strings
template <>
class AddElements<string> {
private:
    string element;
public:
    AddElements(string arg) : element(arg) {}
    
    // Concatenates the second string onto the first one
    string concatenate(string other) {
        return element + other;
    }
};
