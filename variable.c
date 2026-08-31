#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    // Read the number of arrays (n) and the number of queries (q)
    cin >> n >> q;
    
    // Create a 2D vector where the outer vector holds 'n' variable-length inner vectors
    vector<vector<int>> a(n);
    
    // Populate each of the inner arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k; // Read the size of the current array
        
        a[i].resize(k); // Resize the inner vector to hold exactly 'k' elements
        for (int j = 0; j < k; j++) {
            cin >> a[i][j]; // Read the elements of the inner array
        }
    }
    
    // Process and answer each query
    for (int query = 0; query < q; query++) {
        int i, j;
        cin >> i >> j; // Read the row index (i) and column index (j)
        
        // Print the element located at row i, column j
        cout << a[i][j] << endl;
    }
    
    return 0;
}
