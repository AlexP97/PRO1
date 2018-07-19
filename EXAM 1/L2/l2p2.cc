#include <iostream>
using namespace std;

int main () {
	int x, y;
	while (cin >> x >> y) {
		int p = 0;
		int i = x;
		if (y >= x) {
			while (i <= y) {
				p = (p + (i * i * i));
				i = i + 1;	
			}
			cout << "suma dels cubs entre" << ' ' << x << ' ' << 'i' << ' ' << y << ':' << ' ' << p << endl;
		}
		else cout << "suma dels cubs entre" << ' ' << x << ' ' << 'i' << ' ' << y << ':' << ' ' << '0' << endl;
	}
}
