#include <iostream>

using namespace std;

int main() {
    int n;
    // Read the size of the array
    cin >> n;
    
    // Declare an array of size n
    int arr[n];
    
    // Read n space-separated integers into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Loop backwards from the last index (n-1) down to 0
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) {
            cout << " "; // Print space between elements, but not after the last one
        }
    }
    cout << endl;
    
    return 0;
}
