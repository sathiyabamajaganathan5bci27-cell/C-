#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    cin >> q;
    
    // Create a map where the key is the student's name (string) and the value is their total marks (int)
    map<string, int> m;
    
    while (q--) {
        int type;
        cin >> type;
        
        string name;
        if (type == 1) {
            int marks;
            cin >> name >> marks;
            // Add the marks to the existing total (defaults to 0 if the student isn't in the map yet)
            m[name] += marks;
        } 
        else if (type == 2) {
            cin >> name;
            // Erase the student record entirely from the map
            m.erase(name);
        } 
        else if (type == 3) {
            cin >> name;
            // Search for the student to avoid creating an empty entry via the [] operator
            auto itr = m.find(name);
            if (itr != m.end()) {
                cout << itr->second << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
    
    return 0;
}
