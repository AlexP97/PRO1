#include <iostream>
#include <vector>
using namespace std;

void nombres(vector <int>& nombres_dif, int s) {
	bool trobat = false;
	for (int j = 0; j < nombres_dif.size(); j++) {
		if (s == nombres_dif[j]) trobat = true;
	}
	if (not trobat) nombres_dif.push_back(s);
}

int main() {
	int n;
	while (cin >> n) {
		vector <int> nombres_dif;
		int s;
		cin >> s;
		nombres_dif.push_back(s);
		for (int i = 1; i < n; ++i) {
			cin >> s;
			nombres(nombres_dif, s);
		}
		cout << nombres_dif.size() << endl;
	}
}
