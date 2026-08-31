#include <iostream>
#include <string>
#include <exception>

using namespace std;

/* Define the custom exception class BadLengthException here */
class BadLengthException : public exception {
private:
    int length;
    string error_msg;

public:
    // Constructor initializes the length and converts it to a string message
    BadLengthException(int n) : length(n) {
        error_msg = to_string(length);
    }

    // Override the what() method to return the length string
    virtual const char* what() const noexcept override {
        return error_msg.c_str();
    }
};
