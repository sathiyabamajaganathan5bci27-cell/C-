#include <iostream>
#include <fstream>
#include <string>

void parseConfig(const std::string& filepath) {
    std::ifstream file(filepath);
    std::string line;
    while (std::getline(file, line)) {
        size_t delimiter = line.find('=');
        if (delimiter != std::string::npos) {
            std::string key = line.substr(0, delimiter);
            std::string value = line.substr(delimiter + 1);
            std::cout << "Setting: " << key << " -> " << value << "\n";
        }
    }
}

int main() {
    // Expects a file with lines like: theme=dark
    parseConfig("config.txt");
    return 0;
}
