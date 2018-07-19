#include <iostream>
using namespace std;

int main() {
	int nombre;
	while(cin >> nombre) {
		int seguent;
		int sumain = 0;
		int sumafin = 0;
		bool acaba1 = false;
		for (int i = 1; i <= nombre; i++) {
			cin >> seguent;
			if (seguent >= 0 and not acaba1) sumain = sumain + seguent;
			else acaba1 = true;
			if (sumafin + seguent >= 0) sumafin = sumafin + seguent;
			else sumafin = 0;
			}
		cout << sumain << ' ' << sumafin << endl;
	}
}
