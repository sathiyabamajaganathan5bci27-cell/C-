#include <iostream>
#include <map>
#include <sstream>

int main() {
    std::string text = "apple banana apple orange banana apple";
    std::map<std::string, int> counts;
    std::stringstream ss(text);
    std::string word;
    while (ss >> word) counts[word]++;
    for (auto const& [key, val] : counts) {
        std::cout << key << ": " << val << "\n";
    }
    return 0;
}
