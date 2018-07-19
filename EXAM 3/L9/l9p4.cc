#include <iostream>
#include <vector>
using namespace std;

struct Data {
	int dia, mes, any;
};

bool menor(const Data& d1, const Data& d2) {
	if (d1.any < d2.any) return true;
	else if (d1.any == d2.any and d1.mes < d2.mes) return true;
	else if (d1.any == d2.any and d1.mes == d2.mes and d1.dia < d2.dia) return true;
	else return false;
}

int main() {
	int x;
	char c;
	cin >> x;
	Data d1, d2;
	cin >> d1.dia >> c >> d1.mes >> c >> d1.any;
	int n = 1;
	bool trobat = false;
	while (n <= x and not trobat) {
		cin >> d2.dia >> c >> d2.mes >> c >> d2.any;
		if (menor(d1,d2)) {
			d1.dia = d2.dia;
			d1.mes = d2.mes;
			d1.any = d2.any;
			cin >> d2.dia >> c >> d2.mes >> c >> d2.any;
			n = n + 1;
			if (menor(d1,d2)) trobat = true;
			else d1 = d2;
		}
		else {
			d1.dia = d2.dia;
			d1.mes = d2.mes;
			d1.any = d2.any;
		}
		n = n + 1;
	}
	if (trobat) cout << d1.dia << c << d1.mes << c << d1.any << endl;
	else cout << "cap data trobada" << endl;
}
