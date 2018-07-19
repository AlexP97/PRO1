#include <iostream>
using namespace std;

int main() {
	int n;
	bool creix = false;
	string act, seg;
	int count = 0;
	while (cin >> n and not creix) {
		count = count + 1;
		if (n == 0) creix = true;
		else {
			cin >> act;
			for (int i = 1; i < n; i++) {
				cin >> seg;
				if (act <= seg) creix = true;
				else creix = false;
				act = seg;
			}
		}
	}
	if (creix) cout << "La primera linia ordenada creixentment es la " << count << '.' << endl;
	else cout << "No hi ha cap linia ordenada creixentment." << endl;
}
