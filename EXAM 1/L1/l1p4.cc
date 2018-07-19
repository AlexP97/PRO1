#include <iostream>
using namespace std;

int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a <= c and b > d) {
		int e, f, x;
		e = c;
		f = d;
		x = 2;
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a < 0 and c < 0 and b < 0 and d < 0 and a <= c and b > d) {
		int e, f, x;
		e = a;
		f = b;
		x = 2;
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a < c and b >= d) {
		int e, f, x;
		e = c;
		f = d;
		x = 2;
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a < 0 and c < 0 and b < 0 and d < 0 and a < c and b >= d) {
		int e, f, x;
		e = a;
		f = b;
		x = 2;
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a >= c and b < d){
		int e, f, x;
		e = a;
		f = b;
		x = 1;
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a < 0 and c < 0 and b < 0 and d < 0 and a >= c and b < d){
		int e, f, x;
		e = c;
		f = d;
		x = 1;
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a > c and b <= d){
		int e, f, x;
		e = a;
		f = b;
		x = 1;
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a < 0 and c < 0 and b < 0 and d < 0 and a > c and b <= d){
		int e, f, x;
		e = c;
		f = d;
		x = 1;
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
}
else if (a > c and b > d and a < d){
		int e, f;
		char x;
		e = a;
		f = d;
		x = '?';
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a < 0 and c < 0 and b < 0 and d < 0 and a > c and b < d and a < d){
		int e, f;
		char x;
		e = a;
		f = d;
		x = '?';
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
}	
else if (a < c and b < d and c < b){
		int e, f;
		char x;
		e = c;
		f = b;
		x = '?';
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a < 0 and c < 0 and b < 0 and d < 0 and a < c and b < d and c < b){
		int e, f;
		char x;
		e = c;
		f = b;
		x = '?';
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
}	
	else if (a == c and b == d) {
		int e, f;
		char x;
		e = a;
		f = b;
		x = '=';
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (a == d) {
		int e, f;
		char x;
		e = a;
		f = a;
		x = '?';
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else if (b == c) {
		int e, f;
		char x;
		e = b;
		f = b;
		x = '?';
		cout << x << " " << "," << " " << "[" << e << "," << f << "]" << endl;
	}
	else {
		char e, f, x;
		e = '[';
		f = ']';
		x = '?';
		cout << x << " " << "," << " " << e << f << endl;
	}
}
