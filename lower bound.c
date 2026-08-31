#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Read the number of elements
    int n;
    cin >> n;
    
    // Read the sorted elements into the vector
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // Read the number of queries
    int q;
    cin >> q;
    
    // Process each query
    while (q--) {
        int target;
        cin >> target;
        
        // Find the lower bound iterator
        auto low = lower_bound(v.begin(), v.end(), target);
        
        // Calculate the 1-based index from the iterator position
        int index = (low - v.begin()) + 1;
        
        // Check if the target was found at this position
        if (low != v.end() && *low == target) {
            cout << "Yes " << index << "\n";
        } else {
            cout << "No " << index << "\n";
        }
    }
    
    return 0;
}
