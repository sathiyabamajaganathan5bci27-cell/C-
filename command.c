#include <iostream>
#include <map>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    typedef int (*OpFunc)(int, int);
    std::map<char, OpFunc> operations = {{'+', add}, {'-', subtract}};
    std::cout << "5 + 3 = " << operations['+'](5, 3) << "\n";
    return 0;
}
