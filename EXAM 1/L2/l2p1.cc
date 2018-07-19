#include <iostream>
using namespace std;

int main () {
	int x;
	char c;
	cin >> x;
	int i = 0;
	int a = 0;
	int b = 0;
	int d = 0;
	while (cin >> c and i <= x) {
		if (c == 'a') 
			a = a + 1;
		else if (c == 'b') 
			b = b + 1;
		else d = d + 1;
		i = i + 1;
	}
	if (a >= b and a >= d) {
		cout << "majoria de a" << endl;
		cout << a << " " << "repeticio(ns)" << endl;
	}
	else if (b > a and b >= d) {
		cout << "majoria de b" << endl;
		cout << b << " " << "repeticio(ns)" << endl;
	}
	else {
		cout << "majoria de c" << endl;
		cout << d << " " << "repeticio(ns)" << endl;
	}	
}
