#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the total number of integers
    int n;
    cin >> n;
    
    // Store the integers inside a vector
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // Sort all the elements in ascending order
    sort(v.begin(), v.end());
    
    // Print the sorted elements separated by a space
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
