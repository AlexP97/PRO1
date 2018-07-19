#include <iostream>
using namespace std;

int main () {
	int x;
	cin >> x;
	for (int y = 2; y <= 16; y++) {
		int i = 1;
		int h = x;
		while (h >= y) {
			h = h / y;
			i = i + 1;
		}
		cout << "Base " << y << ": " << i << " cifras." << endl;
	}
}
