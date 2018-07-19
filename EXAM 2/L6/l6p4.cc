#include <iostream>
using namespace std;

void base_3_especial(int n) {
	if (n != 0) {
		if (n < 0) {
			n = -n;
			cout << ':';
		}
		base_3_especial (n / 3);
		if (n % 3 == 0) cout << '-';
		else if (n % 3 == 1) cout << '+';
		else cout << '*';
	}
	
}

int main () {
	int x;
	while (cin >> x) {
		if (x == 0) cout << '-';
		else base_3_especial(x);
		cout << endl;
	}
}
