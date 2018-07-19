#include <iostream>
using namespace std;

int mcd(int a, int b) {
	while (b != 0) {
	int n = a % b;
	a = b;
	b = n;
	}
	return a;
}

int main () {
	int a, b;
	while (cin >> a >> b)
	cout << mcd(a, b) << endl;
}
