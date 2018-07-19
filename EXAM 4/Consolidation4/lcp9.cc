#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> v;
		int contador = 0;
		while (contador < n) {
			int x;
			cin >> x;
			bool estat = false;
			for (int j = 0; j < v.size(); j++) {
				if (x == v[j]) estat = true;
			}
			if (not estat) {
				v.push_back(x);
			}
			contador++;
		}
		cout << v.size() << endl;
	}
}
