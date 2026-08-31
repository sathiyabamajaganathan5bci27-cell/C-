#include <iostream>
#include <string>
#include <algorithm>

std::string convertBase(int num, int base) {
    std::string chars = "0123456789ABCDEF";
    std::string result = "";
    while (num > 0) {
        result += chars[num % base];
        num /= base;
    }
    std::reverse(result.begin(), result.end());
    return result.empty() ? "0" : result;
}

int main() {
    std::cout << "255 in Hex: " << convertBase(255, 16) << "\n";
    return 0;
}
