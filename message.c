#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Message {
private:
    string text;
    int id; // Used to track the original creation sequence

public: 
    // Default constructor
    Message() : text(""), id(0) {}
    
    // Parameterized constructor to initialize properties
    Message(const string& t, int current_id) : text(t), id(current_id) {}

    // Public getter returning the raw message content
    const string& get_text() const {
        return text;
    }

    // Overloaded < operator to sort messages chronologically by their creation ID
    bool operator<(const Message& other) const {
        return this->id < other.id;
    }
};

class MessageFactory {
private:
    int id_generator; // Internal counter to issue sequential IDs

public:
    // Constructor initializes the ID sequence generator
    MessageFactory() : id_generator(0) {}

    // Instantiates a Message container paired with a tracking ID
    Message create_message(const string& text) {
        return Message(text, id_generator++);
    }
};
