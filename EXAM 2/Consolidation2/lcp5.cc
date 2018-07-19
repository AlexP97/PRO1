#include <iostream>
using namespace std;

int main() {
	int enter;
	cin >> enter;
	int sequencia;
	cin >> sequencia;
	bool trobat = false;
	int count = 1;
	while (sequencia != -1 and not trobat) {
		if (count == enter) trobat = true;
		else {
			cin >> sequencia;
			count = count + 1;
		}
	}
	if (trobat) cout << "A la posicio " << enter << " hi ha un " << sequencia << '.' << endl;
	else cout << "Posicio incorrecta." << endl;
}
