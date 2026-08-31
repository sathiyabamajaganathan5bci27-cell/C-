#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */

        // Line 1: Format A
        // Truncate to integer, format as hex, lowercase hex characters, include '0x' prefix
        cout << hex << left << showbase << nouppercase << (long long)A << "\n";

        // Line 2: Format B
        // Right justified, width 15, padded with '_', show +/- sign, fixed notation with 2 decimal places
        cout << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << "\n";

        // Line 3: Format C
        // Scientific notation, uppercase 'E', 9 decimal places, remove positive sign if active
        cout << scientific << uppercase << noshowpos << setprecision(9) << C << "\n";

	}
    return 0;
}
