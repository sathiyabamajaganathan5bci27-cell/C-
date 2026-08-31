#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Student {
private:
    // Instance variable to hold 5 exam scores
    vector<int> scores;

public:
    // Reads 5 integers from stdin and saves them
    void input() {
        scores.resize(5);
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    // Returns the sum of the student's scores
    int calculateTotalScore() {
        int total = 0;
        for (int score : scores) {
            total += score;
        }
        return total;
    }
};
