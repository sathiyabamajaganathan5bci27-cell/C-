#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int sharedCounter = 0;

void work() {
    std::lock_guard<std::mutex> lock(mtx);
    for (int i = 0; i < 1000; ++i) sharedCounter++;
}

int main() {
    std::thread t1(work), t2(work);
    t1.join(); t2.join();
    std::cout << "Thread Safe Counter: " << sharedCounter << "\n";
    return 0;
}
