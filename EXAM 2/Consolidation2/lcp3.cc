#include <iostream>
using namespace std;

double fraccio(double a, double b, double k) {
	cout.setf(ios::fixed);
	cout.precision(4);
	double suma = 0;
	double denominador = a;
	while (denominador <= b) {
		suma = suma + 1/denominador;
		denominador = denominador + k;
	}
	return suma;
}


int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	double a, b, k;
	while (cin >> a >> b >> k)
		cout << fraccio(a,b,k) << endl;
}




