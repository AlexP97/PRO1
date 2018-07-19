#include <iostream>
#include <cmath>
using namespace std;

double dist_or(double x, double y) {
	double p = x * x + y * y;
	return sqrt(p); 
}

int main() {
	double x, y;
	cin >> x >> y;
	cout << dist_or(x, y) << endl;
}
