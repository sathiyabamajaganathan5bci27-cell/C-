#include <iostream>
#include <string>
#include <numeric>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Pure virtual functions to enable polymorphism
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    
    // Virtual destructor ensuring safe cleanup of derived classes
    virtual ~Person() {} 
};

class Professor : public Person {
private:
    int publications;
    int cur_id;
    
    // Static variable to maintain sequential ID tracking across all professors
    static int id_generator;

public:
    Professor() {
        cur_id = ++id_generator;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << "\n";
    }
};

// Initialize static member for Professor
int Professor::id_generator = 0;

class Student : public Person {
private:
    int marks[6];
    int cur_id;
    
    // Static variable to maintain sequential ID tracking across all students
    static int id_generator;

public:
    Student() {
        cur_id = ++id_generator;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << "\n";
    }
};

// Initialize static member for Student
int Student::id_generator = 0;
