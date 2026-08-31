#include <iostream>
#include <string>

class BankAccount {
private:
    std::string owner;
    double balance;
public:
    BankAccount(std::string name, double initial) : owner(name), balance(initial >= 0 ? initial : 0) {}
    void deposit(double amount) { if (amount > 0) balance += amount; }
    double getBalance() const { return balance; }
};

int main() {
    BankAccount account("Alice", 500.0);
    account.deposit(150.0);
    std::cout << "Balance: $" << account.getBalance() << "\n";
    return 0;
}
