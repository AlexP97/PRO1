#include <iostream>
using namespace std;

int main (){
	cout.setf(ios::fixed);
	cout.precision(2);
	int x;
	double d;
	cin >> x;
	double p = 0;
	double t = 0;
	double a, b;
	while (cin >> d) {
		p = p + d * d;
		t = t + d;
	}
	a = (p / (x - 1));
	b = ((t * t) / (x * (x - 1)));
	cout << a - b << endl;
		
		
}
