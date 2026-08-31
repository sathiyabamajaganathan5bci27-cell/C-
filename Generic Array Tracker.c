#include <iostream>

template <typename T, int Size>
class StaticArray {
private:
    T arr[Size];
public:
    void set(int idx, T val) { arr[idx] = val; }
    T get(int idx) { return arr[idx]; }
};

int main() {
    StaticArray<std::string, 5> names;
    names.set(0, "GitHub");
    std::cout << names.get(0) << "\n";
    return 0;
}
