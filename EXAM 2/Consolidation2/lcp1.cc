#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2) {
	double x, y;
	double t = n1;
	double n = d1;
	double m = n2;
	double s = d2;
	x = t / n;
	y = m / s;
	if (x < y) return true;
	else return false;
}

int main() {
	int n1, d1, n2, d2;
	while (cin >> n1 >> d1 >> n2 >> d2) {
		cout << c_frac(n1,d1,n2,d2) << endl;
	}
}
