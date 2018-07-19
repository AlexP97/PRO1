#include <iostream>
using namespace std;

int main() {
	int enter;
	while (cin >> enter) { 
		int sequencia;
		int contador = 0;
		cin >> sequencia;
		bool trobat = false;
		while (sequencia != -1) {
			contador = contador + 1;
			if (contador == enter) {
				cout << "A la posicio " << enter << " hi ha un " << sequencia << '.' << endl;
				trobat = true;
			}
			cin >> sequencia;
		}
		if (not trobat) cout << "Posicio incorrecta." << endl;
	}
}
