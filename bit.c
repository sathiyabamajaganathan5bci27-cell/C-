#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // Declare variables for each data type
    int i;
    long l;
    char c;
    float f;
    double d;
    
    // Read the space-separated inputs using their respective format specifiers
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    
    // Print each value on a new line with the required decimal precision
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);  // %.3f limits float to 3 decimal places
    printf("%.9lf\n", d); // %.9lf limits double to 9 decimal places
    
    return 0;
}
