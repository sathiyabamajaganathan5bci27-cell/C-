#include <iostream>

class SmartIntPtr {
private:
    int* ptr;
public:
    explicit SmartIntPtr(int* p = nullptr) : ptr(p) {}
    ~SmartIntPtr() { delete ptr; std::cout << "Memory freed.\n"; }
    int& operator*() { return *ptr; }
};

int main() {
    { SmartIntPtr wrapper(new int(42)); } // Memory automatically cleans up here
    return 0;
}
