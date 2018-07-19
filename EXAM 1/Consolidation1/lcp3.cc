#include <iostream>
using namespace std;

int main () {
	int x, p, n, m;
	cin >> x;
	p = x % 10;
	x = x / 10;
	n = x % 10;
	x = x / 10;
	m = x % 10;
	cout << p + n + m << endl;
}
