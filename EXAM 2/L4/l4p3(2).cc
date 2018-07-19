#include <iostream>
using namespace std;

bool es_data_valida(int d, int m, int a) {
	if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
		if (d <= 31 and d >= 1) return true;
		else return false;
	}
	else if (m == 2) {
		if (a % 100 == 0) a = a / 100;
		else if (a % 4 == 0) {
			if (d >= 1 and d <= 29) return true;
			else return false;
		}
		else if (d >= 1 and d <= 28) return true;
		else return false;
	}
	else if (m >= 1 and m <= 12) {
		if (d >= 1 and d <= 30) return true;
		else return false;
	}
	else return false;	
}

int main () {
	int d, m, a;
	cin >> d >> m >> a;
	cout << es_data_valida(d, m, a) << endl;
}
