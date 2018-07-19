#include <iostream>
#include <vector>
using namespace std;

bool pangrama(vector<bool> v) {
	for (int i = 0; i < v.size(); i++) {
		if (not v[i]) return false;
	}
	return true;
}

int main() {
	char c;
	while (cin >> c) {
		vector<bool> v(26, false);
		while (c != '.') {
			if (c >= 'a' and c <= 'z') v[c - 'a'] = true;
			else if (c >= 'A' and c <= 'Z') v[c - 'A'] = true;
			cin >> c;
		}
		if (pangrama(v)) cout << "SI" << endl;
		else cout << "NO" << endl;
	
	}
}
