#include <iostream>
using namespace std;

int main() {
	int enter;
	cin >> enter;
	int sequencia;
	cin >> sequencia;
	int count = 1;
	bool trobat = false;
	while (sequencia != -1 and not trobat) {
		if (count == enter) trobat = true;
		else {
			cin >> sequencia;
			count = count + 1;
		}
	}
	cout << "A la posicio " << enter << " hi ha un " << sequencia << '.' << endl;
}
