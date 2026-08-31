#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> roster = {{101, "John"}, {102, "Sarah"}};
    int searchId = 102;
    if (roster.find(searchId) != roster.end()) {
        std::cout << "ID " << searchId << " belongs to " << roster[searchId] << "\n";
    }
    return 0;
}
