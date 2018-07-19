#include <iostream>
using namespace std;

int main () {
	int a = 0;
	int b = 0;
	char c;
	while (cin >> c) {
		if (c == 'n') a = a - 1;
		else if (c == 's') a = a + 1;
		else if (c == 'e') b = b + 1;
		else b = b - 1;
	}
	cout << '(' << b << ',' << ' ' << a << ')' << endl;
}
