#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

// This simulates the logic that would be inside the main function's loop for each test case
void handle_test_case(long long A, long long B) {
    try {
        // Call the Server's compute function
        long long result = Server::compute(A, B);
        cout << result << "\n";
    } 
    catch (const bad_alloc& e) {
        // Handles memory allocation failures
        cout << "Not enough memory\n";
    } 
    catch (const exception& e) {
        // Handles any other standard C++ exceptions
        cout << "Exception: " << e.what() << "\n";
    } 
    catch (...) {
        // Handles any non-standard exceptions
        cout << "Other Exception\n";
    }
}
