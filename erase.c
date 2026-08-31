#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read the initial size of the vector
    int n;
    cin >> n;
    
    // Read the vector elements
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // Query 1: Erase a single element (convert 1-based index to 0-based)
    int pos;
    cin >> pos;
    v.erase(v.begin() + (pos - 1));
    
    // Query 2: Erase a range of elements (convert 1-based index to 0-based)
    int start, end;
    cin >> start >> end;
    v.erase(v.begin() + (start - 1), v.begin() + (end - 1));
    
    // Print the final size of the vector
    cout << v.size() << "\n";
    
    // Print the remaining elements
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
