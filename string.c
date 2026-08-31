#include <iostream>
#include <string>

using namespace std;

int main() {
    // Read the two input strings
    string a, b;
    cin >> a >> b;
  
    // 1. Print the lengths of both strings separated by a space
    cout << a.size() << " " << b.size() << "\n";
  
    // 2. Print the concatenated string
    cout << a + b << "\n";
  
    // 3. Swap the first characters and print them separated by a space
    string a_swapped = a;
    string b_swapped = b;
    
    a_swapped[0] = b[0];
    b_swapped[0] = a[0];
    
    cout << a_swapped << " " << b_swapped << "\n";
  
    return 0;
}
