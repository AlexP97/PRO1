#include <iostream>
using namespace std;

int suma_digits(int x) {
	int p = 0;
	while (x > 0) {
		p = p + x % 10;
		x = x / 10;
	}
	return p;
}

int reduccio_digits(int x) {
	int i = suma_digits(x);
	while (i >= 10) i = suma_digits(i);
	return i;
}

int main () {
	int x;
	cin >> x;
	cout << reduccio_digits (x) << endl;
}
