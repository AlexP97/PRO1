#include <iostream>
using namespace std;

int main () {
	int x, y, z, m, n, o;
	char a, b, c;
	cin >> x >> y >> z;
	cin >> a >> b >> c;
	if (a == 'A' && b == 'B' && c == 'C' and x > y and x > z and y > z) {
			m = x;
			n = y;
			o = z;
			cout << o << " " << n << " " << m << endl;
		}
	else if (a == 'A' && b == 'B' && c == 'C' and x > y and x > z and y < z) {
			m = x;
			n = y;
			o = z;
			cout << n << " " << o << " " << m << endl;
		}
	else if (a == 'A' && b == 'B' && c == 'C' and x < y and y > z and x < z) {
				m = x;
				n = y;
				o = z;
				cout << m << " " << o << " " << n << endl;
	}
	else if (a == 'A' && b == 'B' && c == 'C' and x < y and y > z and x > z) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << m << " " << n << endl;
	}
	else if (a == 'A' && b == 'B' && c == 'C' and x < z and y < z and x < y) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << n << " " << o << endl;
	}
	else if (a == 'A' && b == 'B' && c == 'C' and x < z and y < z and x > y) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << m << " " << o << endl;
	}
	
	else if (a == 'B' && b == 'A' && c == 'C' and x > y and x > z and y > z) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << o << " " << m << endl;
	}
	else if (a == 'B' && b == 'A' && c == 'C' and x > y and x > z and y < z) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << n << " " << m << endl;
	}
	else if (a == 'B' && b == 'A' && c == 'C' and x < y and y > z and x < z) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << m << " " << n << endl;
	}
	else if (a == 'B' && b == 'A' && c == 'C' and x < y and y > z and x > z) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << o << " " << n << endl;
	}
	else if (a == 'B' && b == 'A' && c == 'C' and x < z and y < z and x < y) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << m << " " << o << endl;
	}
	else if (a == 'B' && b == 'A' && c == 'C' and x < z and y < z and x > y) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << n << " " << o << endl;
	}
	
	else if (a == 'B' && b == 'C' && c == 'A' and x > y and x > z and y > z) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << m << " " << o << endl;
	}
	else if (a == 'B' && b == 'C' && c == 'A' and x > y and x > z and y < z) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << m << " " << n << endl;
	}
	else if (a == 'B' && b == 'C' && c == 'A' and x < y and y > z and x < z) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << n << " " << m << endl;
	}
	else if (a == 'B' && b == 'C' && c == 'A' and x < y and y > z and x > z) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << n << " " << o << endl;
	}
	else if (a == 'B' && b == 'C' && c == 'A' and x < z and y < z and x < y) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << o << " " << m << endl;
	}
	else if (a == 'B' && b == 'C' && c == 'A' and x < z and y < z and x > y) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << o << " " << n << endl;
	}
	
	else if (a == 'A' && b == 'C' && c == 'B' and x > y and x > z and y > z) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << m << " " << n << endl;
	}
	else if (a == 'A' && b == 'C' && c == 'B' and x > y and x > z and y < z) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << m << " " << o << endl;
	}
	else if (a == 'A' && b == 'C' && c == 'B' and x < y and y > z and x < z) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << n << " " << o << endl;
	}
	else if (a == 'A' && b == 'C' && c == 'B' and x < y and y > z and x > z) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << n << " " << m << endl;
	}
	else if (a == 'A' && b == 'C' && c == 'B' and x < z and y < z and x < y) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << o << " " << n << endl;
	}
	else if (a == 'A' && b == 'C' && c == 'B' and x < z and y < z and x > y) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << o << " " << m << endl;
	}
	
	else if (a == 'C' && b == 'B' && c == 'A' and x > y and x > z and y > z) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << n << " " << o << endl;
	}
	else if (a == 'C' && b == 'B' && c == 'A' and x > y and x > z and y < z) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << o << " " << n << endl;
	}
	else if (a == 'C' && b == 'B' && c == 'A' and x < y and y > z and x < z) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << o << " " << m << endl;
	}
	else if (a == 'C' && b == 'B' && c == 'A' and x < y and y > z and x > z) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << m << " " << o << endl;
	}
	else if (a == 'C' && b == 'B' && c == 'A' and x < z and y < z and x < y) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << n << " " << m << endl;
	}
	else if (a == 'C' && b == 'B' && c == 'A' and x < z and y < z and x > y) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << m << " " << n << endl;
	}
	
	else if (a == 'C' && b == 'A' && c == 'B' and x > y and x > z and y > z) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << o << " " << n << endl;
	}
	else if (a == 'C' && b == 'A' && c == 'B' and x > y and x > z and y < z) {
		m = x;
		n = y;
		o = z;
		cout << m << " " << n << " " << o << endl;
	}
	else if (a == 'C' && b == 'A' && c == 'B' and x < y and y > z and x < z) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << m << " " << o << endl;
	}
	else if (a == 'C' && b == 'A' && c == 'B' and x < y and y > z and x > z) {
		m = x;
		n = y;
		o = z;
		cout << n << " " << o << " " << m << endl;
	}
	else if (a == 'C' && b == 'A' && c == 'B' and x < z and y < z and x < y) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << m << " " << n << endl;
	}
	else if (a == 'C' && b == 'A' && c == 'B' and x < z and y < z and x > y) {
		m = x;
		n = y;
		o = z;
		cout << o << " " << n << " " << m << endl;
	}
}

		
