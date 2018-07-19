#include <iostream>
using namespace std;

int main() {
	int ant, act, seg;
	cin >> ant >> act >> seg;
	bool trobat = false;
	while (seg != 0) {
		if (act > ant and act > seg and act > 3143) trobat = true;
		ant = act;
		act = seg;
		cin >> seg;
	}
	if (trobat) cout << "SI" << endl;
	else cout << "NO" << endl;
}
