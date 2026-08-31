#include <iostream>
#include <cstdio>
#include <cmath> // Required for abs()

using namespace std;

void update(int *a, int *b) {
    // Store original values before modification
    int original_a = *a;
    int original_b = *b;
    
    // Update 'a' to store the sum
    *a = original_a + original_b;
    
    // Update 'b' to store the absolute difference
    *b = abs(original_a - original_b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    // Read input values
    scanf("%d %d", &a, &b);
    
    // Call the update function using pointers
    update(pa, pb);
    
    // Print the updated values
    printf("%d\n%d\n", a, b);

    return 0;
}
