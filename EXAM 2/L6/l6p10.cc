#include <iostream>
using namespace std;

bool es_ascendent(int n) {
	bool ascend;
	int x, y;
	while (ascend and n > 9) {
		x = n%10;
		n = n/10;
		y = n%10;
		if (y == 9 and x == 0) ascend = true;
		else if (x - 1 == y) ascend = true;
		else ascend = false;
	}
	if (ascend) return true;
	else return false;
	
		
}

int main() {
	int n;
	bool trobat = false;
	int contador = 0;
	while (cin >> n and not trobat) {
		if (es_ascendent(n)) contador = contador + 1;
		else contador = 0;
		if (contador == 2) trobat = true;
	}
	if (trobat) cout << "SI" << endl;
	else cout << "NO" << endl;
	
}
