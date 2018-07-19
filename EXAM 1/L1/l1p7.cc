#include <iostream>
using namespace std;

int main () {
	cout.setf(ios::fixed);
	cout.precision(4);
	double i, n, q, t, m;
	string c;
	cin >> i >> c;
	int N = 0;
	m = i;
	if (c == "semestral") n = 2;
	else if (c == "mensual") n = 12;
	else if (c == "trimestral") n = 4;
	else n = 52;
	q = m / (n * 100);
	while (N != n) {
		t = i * q;
		i = i + t;
		N = N + 1;
	}
	cout << (i - m) * 100 / m << endl;
}
	
