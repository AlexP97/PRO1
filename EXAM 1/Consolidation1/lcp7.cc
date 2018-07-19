#include <iostream>
using namespace std;

int main () {
	cout.setf(ios::fixed);
	cout.precision(4);
	int x;
	double y, z, n;
	cin >> x >> y >> z >> n;
	double p = n + z * x + y * x * x;
	cout << p << endl;
}
