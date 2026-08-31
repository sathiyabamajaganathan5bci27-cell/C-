#include <iostream>
#include <vector>

long long recursiveFib(int n) {
    if (n <= 1) return n;
    return recursiveFib(n - 1) + recursiveFib(n - 2);
}

long long iterativeFib(int n) {
    if (n <= 1) return n;
    std::vector<long long> dp(n + 1);
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; ++i) dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}

int main() {
    std::cout << "Iterative Fib(10): " << iterativeFib(10) << "\n";
    return 0;
}
