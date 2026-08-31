#include <iostream>
#include <string>

using namespace std;

// Enumerations provided by the challenge environment
enum class Color { red, green, orange };
enum class Fruit { apple, banana, orange };

// Base class template for converting enum values to their string names
template <typename T>
class Traits {
public:
    static string name(int index) {
        return "unknown";
    }
};

// Template specialization explicitly for the Color enumeration
template <>
class Traits<Color> {
public:
    static string name(int index) {
        switch (index) {
            case 0: return "red";
            case 1: return "green";
            case 2: return "orange";
            default: return "unknown";
        }
    }
};

// Template specialization explicitly for the Fruit enumeration
template <>
class Traits<Fruit> {
public:
    static string name(int index) {
        switch (index) {
            case 0: return "apple";
            case 1: return "banana";
            case 2: return "orange";
            default: return "unknown";
        }
    }
};
