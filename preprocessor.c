#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* Enter your macros here */

// Macro to find the minimum of two values
#define to_min(a, b) if((b) < (a)) { (a) = (b); }

// Macro to find the maximum of two values
#define to_max(a, b) if((b) > (a)) { (a) = (b); }

// Macro transforming an expression or loop variable into an inline range check
#define io(v) cin >> v

// Macro to replace the function-like loop signature used by the kids
#define foreach(v, i) for (int i = 0; i < v.size(); ++i)

// Macro to wrap the formatting required for the output text
#define FUNCTION(name, op) void name(int& val, int element) { if (element op val) val = element; }

// Macro to handle stringification of the final result block
#define toStr(x) #x
