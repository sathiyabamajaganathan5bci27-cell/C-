#include <iostream>

class Vehicle {
public:
    virtual void startEngine() { std::cout << "Generic engine start.\n"; }
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void startEngine() override { std::cout << "Car engine revs up!\n"; }
};

int main() {
    Vehicle* v = new Car();
    v->startEngine();
    delete v;
    return 0;
}
