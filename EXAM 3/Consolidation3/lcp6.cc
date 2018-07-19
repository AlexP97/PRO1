#include <iostream>
#include <vector>
using namespace std;

int main() {
	int k;
	while (cin >> k) {
		bool parell = false;
		bool senar = false;
		for (int i = 0; i < k; i++) {
			int n;
			cin >> n;
			if (n%2 == 0) parell = true;
			else senar = true;
		}
		if (senar and parell) cout << "si" << endl;
		else cout << "no" << endl;
	}
}
