#include <iostream>
#include <string>

std::string encryptCaesar(std::string text, int shift) {
    for (char &c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + shift) % 26 + base;
        }
    }
    return text;
}

int main() {
    std::cout << "Encrypted: " << encryptCaesar("Hello C++", 4) << "\n";
    return 0;
}
