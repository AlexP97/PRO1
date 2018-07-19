#include <iostream>
using namespace std;

bool rodo (int n, int b) {
	int k = n;
	int digits = 0;
	int suma = 0;
	while (k > 0) {
		k = k / b;
		digits = digits + 1;
	}
	while (n > 0) {
		k = n%b;
		n = n/b;
		suma = suma + k;
	}
	if (suma == digits) return true;
	else return false;
}

int main() {
	int n, base;
	int rodons = 0;
	bool rodon;
	while (cin >> n >> base and rodons != 2) {
		rodon = rodo(n,base);
		if (rodon) rodons = rodons + 1;
	}
	if (rodons == 2) cout << "SI" << endl;
	else cout << "NO" << endl;
}
