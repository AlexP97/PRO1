#include <iostream>
using namespace std;

int main () {
	int x, y, m, b, z, a, n, c;
	int t = 0;
	cin >> x;
	m = x % 10;
	x = x / 10;
	b = x % 10;
	x = x / 10;
	z = x % 10;
	x = x * 100 + b * 10 + m;
	cout << "nombres que acaben igual que " << x << ':' << endl;
	while (cin >> y){
		n = y % 10;
		y = y / 10;
		a = y % 10;
		y = y / 10;
		c = y % 10;
		y = y * 100 + a * 10 + n;
		if (n == m and a == b and c == z){
			t = t + 1;
			cout << y << endl;
		}
	}
	cout << "total: " << t << endl;	
}
